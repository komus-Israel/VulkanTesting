#include <vulkan/vulkan.h> ///  To provide functions, structures and enumerations

#include <iostream> /// To report and propagate errors
#include <stdexcept> /// To report and propagate errors
#include <cstdlib> ///  provides the EXIT_SUCCESS and EXIT_FAILURE macros.

class HelloTriangleApplication {
    
    
public:
    void run (){
        
    }
    
private:
    
    /// initialize vulkan object
    void initVulkan(){
         
    }
    
    /// render frames
    void mainLoop(){
        
    }
    
    /// deallocate memory
    void cleanUp(){
        
    }
    
};


int main(){
    HelloTriangleApplication app;
    
    try{
        app.run()
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
