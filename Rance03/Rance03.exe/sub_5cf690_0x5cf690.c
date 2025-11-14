// 函数: sub_5cf690
// 地址: 0x5cf690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t eax_1 = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t ebp = **(arg1 + 0x234)
int32_t eax_3 = sub_5d5dc0(arg1 + 0x16c)
struct sys43vm::CPage::VTable*** esi_1 = *(arg1 + 0x174) + (eax_3 << 2)
struct sys43vm::CPage::VTable** eax_5
void* ecx_3
int32_t edx
eax_5, ecx_3, edx = sub_5d5ae0(arg1 + 0x188)
*esi_1 = eax_5

if (eax_3 s< 0)
    int32_t var_1c = 0x6ea41c
    return sub_5c2400(eax_5, edx, ecx_3, arg1, "DG_NEW_FROM_METHOD")

int32_t eax_9 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2

if (eax_3 u< eax_9)
    eax_9 = *(arg1 + 0x174)
    ecx_3 = *(eax_9 + (eax_3 << 2))
    
    if (ecx_3 != 0)
        int32_t eax_14
        
        if (ebp == 0xffffffff)
            eax_14 = 0
        else
            int32_t eax_12 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
            
            if (ebp u>= eax_12)
            label_5cf73a:
                int32_t var_1c_1 = ebp
                int32_t var_20 = 0x6ea5e4
                return sub_5c2400(eax_12, edx, ecx_3, arg1, "DG_NEW_FROM_METHOD")
            
            eax_12 = *(*(arg1 + 0x174) + (ebp << 2))
            
            if (eax_12 == 0)
                goto label_5cf73a
            
            eax_14 = *(eax_12 + 0x20)
        
        int32_t eax_16
        int32_t ecx_4
        int32_t edx_1
        eax_16, ecx_4, edx_1 = sub_5d5000(ecx_3, ebp, eax_1, eax_14)
        
        if (eax_16.b != 0)
            return sub_5ddf10(arg1 + 0x220, eax_3)
        
        char const* const var_1c_3 = "setDelegateMethod"
        return sub_5c2400(eax_16, edx_1, ecx_4, arg1, "DG_NEW_FROM_METHOD")

int32_t var_1c_5 = eax_3
int32_t var_20_2 = 0x6ea5ac
return sub_5c2400(eax_9, edx, ecx_3, arg1, "DG_NEW_FROM_METHOD")
