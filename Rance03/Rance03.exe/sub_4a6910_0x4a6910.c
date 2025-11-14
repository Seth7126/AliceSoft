// 函数: sub_4a6910
// 地址: 0x4a6910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t i = arg2
void* eax = *(arg1 + 0xc)
int32_t edx = *(eax + 0x98)
int32_t* result = *(eax + 0x94)

if (result != edx)
    while (*result != i)
        result = &result[1]
        
        if (result == edx)
            break
    
    if (result != edx)
        void* ecx_1 = *(arg1 + 4)
        
        if (*(ecx_1 + 0x4a0) == 0)
            result = sub_4a2d30(ecx_1)
            
            if (result != 0)
                *(arg1 + 8)
                struct IInterface::VTable** eax_1 = sub_4a56a0(i)
                int32_t ecx_3 = result[0xb]
                
                if (eax_1[0x3f] != ecx_3)
                    eax_1[0x3f] = ecx_3
                    eax_1[0x1c].b = 1
                
                int32_t eax_2 = eax_1[0xb]
                arg2 = eax_2
                sub_4b7b70(&result[0x1b], eax_2)
                sub_4158d0(&result[0x40], &arg2)
                result[0x1c].b = 1
                return sub_4b7b70(*(arg1 + 0xc), i)

return result
