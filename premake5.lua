workspace "Zinc3D"
    architecture "x64"
    configurations { "Debug", "Release" }

outputDir = "%{cfg.system}-%{cfg.buildcfg}"

group "lib"
    include "lib/GLAD"
    include "lib/GLFW"
group ""

project "Zinc3D"
    location ""
    kind "ConsoleApp"
    language "C++"  
    cppdialect "C++17"

    targetdir("Build/" .. outputDir)
    objdir("BuildInt/" .. outputDir)

    files {

        "src/**.h",
        "src/**.cpp"

    }
    includedirs {

        "src",

        "lib/GLAD/include",
        "lib/GLFW/include",
        "lib/GLM/include",

        "lib/spdlog",

    }
    links {

        "GLFW",
        "GLAD"

    }

    filter "system:windows"
        systemversion "latest"

        defines {

            "ZN_WINDOWS",

        }

        files {

            "platform/Windows/**.cpp"

        }
    
    filter "configurations:Debug"
        defines "ZN_DEBUG"
        runtime "Debug"
        symbols "on"

    filter "configurations:Release"
        defines "ZN_RELEASE"
        runtime "Release"
        optimize "on"