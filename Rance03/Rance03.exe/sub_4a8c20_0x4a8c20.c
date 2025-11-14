// 函数: sub_4a8c20
// 地址: 0x4a8c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t edi = *(arg1 + 0x54)

if (edi == 0)
    if (*(arg1 + 0x48) == *(arg1 + 0x4c))
        struct partsengine::CGUIController::VTable** eax_2 = sub_4e7cb0(arg1 + 0x28)
        sub_4a8470(arg1, sub_4e7cb0(arg1 + 0x28), eax_2, 0)
    
    edi = *(*(arg1 + 0x48) + ((*(arg1 + 0x4c) - *(arg1 + 0x48)) s>> 2 << 2) - 4)

void** i = *(arg1 + 0x48)
int32_t* edx = arg2

if (i != *(arg1 + 0x4c))
    void* eax_5 = arg1 + 0x58
    
    do
        void* ecx_6 = *i
        void* var_18_1 = eax_5
        eax_5.b = edi == ecx_6
        sub_4a7540(ecx_6, edx, arg3, arg4, eax_5.b, arg5, var_18_1)
        edx = arg2
        eax_5 = arg1 + 0x58
        i = &i[1]
    while (i != *(arg1 + 0x4c))

void* ecx_7 = *(arg1 + 0x44)
int32_t* eax_7
eax_7.b = edi == ecx_7
return sub_4a7540(ecx_7, edx, arg3, arg4, eax_7.b, arg5, arg1 + 0x58)
