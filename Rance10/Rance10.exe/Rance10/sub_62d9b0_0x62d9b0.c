// 函数: sub_62d9b0
// 地址: 0x62d9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebx = arg4
int32_t ebp = arg2
char* result = arg3

if (*(ebx + 8) != 0 && result != ebp)
    do
        arg2.b = *result
        
        if ((arg2.b u< 0x81 || arg2.b u> 0x9f) && (arg2 + 0x20).b u> 0xf)
            int32_t esi_2 = *(ebx + 4)
            arg4 = zx.d(arg2.b)
            void* var_4
            arg3, arg2 = sub_630e60(ebx, &var_4, &arg4)
            
            if (var_4 == esi_2)
                break
            
            arg1 = 1
        else
            arg3.w = sx.w(result[1])
            arg1.w = sx.w(arg2.b)
            arg1.w <<= 8
            arg3.w &= 0xff
            int32_t esi_1 = *(ebx + 4)
            arg3.w |= arg1.w
            arg4 = zx.d(arg3.w)
            void* var_8
            arg3, arg2 = sub_630e60(ebx, &var_8, &arg4)
            
            if (var_8 == esi_1)
                break
            
            arg1 = 2
        
        result = &result[arg1]
    while (result != ebp)

return result
