// 函数: sub_68a9b0
// 地址: 0x68a9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t var_18 = sub_68aa40(arg1)
int32_t var_18_1 = sub_68abd0(arg1 + 4)
sub_68abd0(arg1 + 0x10)
int32_t* arg_4
int32_t* edi = arg_4
int32_t esi = 0

while (sub_68a820(*(arg1 + 4) + (esi << 3), esi, 1, edi) != 0)
    esi += 1
    
    if (esi s>= 5)
        int32_t esi_1 = 0
        
        while (true)
            char eax_2
            int32_t* ecx_6
            eax_2, ecx_6 = sub_68a820(*(arg1 + 0x10) + (esi_1 << 3), esi_1, 0, edi)
            
            if (eax_2 == 0)
                break
            
            esi_1 += 1
            
            if (esi_1 s>= 5)
                arg_4 = nullptr
                int32_t** var_18_4 = &arg_4
                sub_68ab30(arg1 + 0x1c, ecx_6)
                int32_t result
                result.b = 1
                return result
        
        break

return 0
