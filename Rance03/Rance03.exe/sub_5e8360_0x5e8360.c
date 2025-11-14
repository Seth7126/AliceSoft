// 函数: sub_5e8360
// 地址: 0x5e8360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 0x3d) != 0)
    *(arg1 + 0x3d) = 0
    sub_5e5700(arg1)
    int32_t edx_1 = *(arg1 + 0x40)
    int32_t eax_1 = *(arg1 + 0x44)
    *(arg1 + 0x48) = edx_1
    *(arg1 + 0x4c) = eax_1
    *(arg1 + 0xfc) = edx_1
    *(arg1 + 0x100) = eax_1
    sub_5e5300(arg1, 0)

if (*(arg1 + 0xe4) != 0)
    (*(**(arg1 + 0xe4) + 0x40))()
    (*(**(arg1 + 0xe4) + 0x44))()

if (*(arg1 + 0x268) != 0)
    void* ecx_3 = *(arg1 + 0x114)
    
    if (ecx_3 != 0)
        sub_46db40(ecx_3, arg1 + 0x258)

void* edi = *(arg1 + 0x114)

if (edi != 0)
    if (*(edi + 0x3a) != 0)
        if (*(edi + 0x38) == 0 && *(edi + 0x21) == 0 && *(edi + 0x3b) == 0)
            ShowCursor(1)
            *(edi + 0x3b) = 1
        
        sub_46daa0(edi)
        *(edi + 0x3a) = 0
    
    void* edi_1 = *(arg1 + 0x114)
    
    if (*(edi_1 + 0x3b) == 0)
        ShowCursor(1)
        *(edi_1 + 0x3b) = 1

bool cond:0 = data_75d4d4 == 0
*(arg1 + 0x114) = 0

if (not(cond:0))
    sub_44fcd0()

if (data_75d4f8 != 0)
    sub_47d260()
