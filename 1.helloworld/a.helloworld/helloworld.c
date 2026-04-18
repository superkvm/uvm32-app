#include "uvm32_target.h"

void main(void) {
    uint32_t last_print_time = 0;
    const uint32_t print_interval = 1000;  // 1秒 = 1000毫秒
    
    while (1) {
        uint32_t current_time = millis();
        
        // 检查是否到了打印时间（每1秒打印一次）
        if (current_time - last_print_time >= print_interval) {
            println("Hello world");
            last_print_time = current_time;
        }
        
        yield(0);  // 让出 CPU，避免 VM 被认为挂起
    }
}

