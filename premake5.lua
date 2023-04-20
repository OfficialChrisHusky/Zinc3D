workspace "Zinc3D"
    architecture "x64"
    configurations { "Debug", "Release" }

project "Zinc3D"
    location ""
    kind "ConsoleApp"
    language "C++"  
    cppdialect "C++17"

    targetdir("Build")
    objdir("BuildInt")

    files {

        "src/**.h",
        "src/**.cpp"

    }

    includedirs {

        "src"

    }

    filter "system:windows"
        systemversion "latest"

        defines {

            "ZN_WINDOWS",

        }
    
    filter "configurations:Debug"
        defines "ZN_DEBUG"
        runtime "Debug"
        symbols "on"

    filter "configurations:Release"
        defines "ZN_RELEASE"
        runtime "Release"
        optimize "on"