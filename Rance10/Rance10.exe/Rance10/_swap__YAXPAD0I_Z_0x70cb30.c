// 函数: ?swap@@YAXPAD0I@Z
// 地址: 0x70cb30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = arg2
int32_t edi
int32_t var_8 = edi

if (arg1 != result)
    int32_t i_1 = arg3
    
    if (i_1 != 0)
        void* edi_2 = arg1 - result
        int32_t i
        
        do
            char ecx = *result
            result = &result[1]
            char edx = *(edi_2 + result - 1)
            *(edi_2 + result - 1) = ecx
            result[0xffffffff] = edx
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
