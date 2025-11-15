// 函数: sub_602090
// 地址: 0x602090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = data_7fcbb0
int32_t var_18 = 0
int32_t* result = arg3
int32_t* result_1 = result

if (ebx != 0)
    void* eax = sub_622840(ebx, arg2)
    
    if (eax != 0 && *(eax + 0x34) u<= 0)
        int32_t eax_1 = sub_6211e0(ebx, *(eax + 0x2c), *(eax + 0x30), 0)
        
        if (eax_1 s>= 0)
            int32_t* eax_2 = sub_622840(data_7fcbb0, eax_1)
            
            if (eax_2 != 0 && sub_627dc0(eax_2, eax, arg4) != 0)
                int32_t var_14 = 0x4f
                int32_t var_c = eax_1
                sub_601b20(result, &var_14)
                sub_601b50(&var_14)
                return result
            
            sub_621db0(data_7fcbb0, eax_1)
    
    arg3 = result

sub_602420(arg3)
return result
