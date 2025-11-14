// 函数: sub_4a8470
// 地址: 0x4a8470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* eax_2 = (*(arg1 + 0x4c) - *(arg1 + 0x48)) & 0xfffffffc

if (eax_2 s< 0x9c40)
    struct partsengine::CGUIController::VTable** eax_3 = sub_4a8310(arg1, arg2, arg3)
    bool cond:0_1 = *(arg1 + 0x70) s< 1
    arg3 = eax_3
    
    if (not(cond:0_1))
        sub_4ac530(&eax_3[4])
    
    int32_t ecx_2 = arg4
    
    if (ecx_2 s< 0)
        ecx_2 = sub_4a8430(arg1) + 1
    
    if ((*(arg1 + 0x4c) - *(arg1 + 0x48)) s>> 2 s<= ecx_2)
        int32_t eax_5 = sub_412de0(arg1 + 0x48, &arg3)
        *(arg1 + 0x54) = arg3
        return eax_5
    
    struct partsengine::CGUIController::VTable*** var_14_3 = &arg3
    eax_2 = sub_47a0a0(arg1 + 0x48, &arg2, *(arg1 + 0x48) + (ecx_2 << 2), &arg3)
    *(arg1 + 0x54) = eax_3

return eax_2
