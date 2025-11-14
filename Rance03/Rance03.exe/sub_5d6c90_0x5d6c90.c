// 函数: sub_5d6c90
// 地址: 0x5d6c90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg1
int32_t eax = sub_5d5dc0(arg1)
*(*(arg1 + 8) + (eax << 2)) = sub_5d5a30(arg1 + 0x1c)
struct sys43vm::CPage::VTable** eax_2

if (eax != 0xffffffff && eax u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    eax_2 = *(*(arg1 + 8) + (eax << 2))
    
    if (eax_2 != 0)
        void* esi_2 = *(arg1 + 4)
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = muls.dp.d(0x2e8ba2e9, *(esi_2 + 0xc4) - *(esi_2 + 0xc0))
        int32_t edx_2 = edx_1 s>> 3
        
        if (arg2 u< (edx_2 u>> 0x1f) + edx_2)
            int32_t edx_3 = arg2 * 0x2c
            void* edx_4 = edx_3 + *(esi_2 + 0xc0)
            
            if (edx_3 != neg.d(*(esi_2 + 0xc0)))
                int32_t esi_3 = *(edx_4 + 0x18)
                int32_t ecx_5
                eax_2, ecx_5 = sub_5d3720(eax_2, edx_4 + 0x20, *(*(arg1 + 4) + 0x14c) + arg2, arg4)
                
                if (eax_2.b != 0)
                    if (arg4.b == 0 || esi_3 == 0xffffffff)
                    label_5d6d53:
                        *arg3 = eax
                        int32_t* eax_13
                        eax_13.b = 1
                        return eax_13
                    
                    int32_t var_1c_2 = ecx_5
                    
                    if (sub_5c4b50(*(arg1 + 4), eax, esi_3).b != 0)
                        goto label_5d6d53

eax_2.b = 0
return eax_2
