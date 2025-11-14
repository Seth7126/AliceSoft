// 函数: sub_5e73a0
// 地址: 0x5e73a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
sub_5e8670(arg1)
void* ebx = *(arg1 + 0x254)

for (int32_t* i = *(ebx + 0x45c); i != *(ebx + 0x460); i = &i[1])
    (*(**i + 4))()

*(ebx + 0x460) = *(ebx + 0x45c)

if (*(arg1 + 0x268) != 0)
    sub_5eb0f0(arg1 + 0x58, arg1 + 0x258)
    
    if (*(arg1 + 0x268) != 0)
        void* ecx_2 = *(arg1 + 0x114)
        
        if (ecx_2 != 0)
            sub_46db40(ecx_2, arg1 + 0x258)

if (data_75d4d4 != 0)
    sub_44fcd0()

if (data_75d4f8 != 0)
    sub_47d260()

void* esi = *(arg1 + 0x114)

if (esi != 0 && *(esi + 0x3b) == 0)
    ShowCursor(1)
    *(esi + 0x3b) = 1

void* esi_1 = *(arg1 + 0x21c)
*(arg1 + 0x114) = 0

if (*(esi_1 + 8) != 0)
    int32_t eax_5 = *(esi_1 + 0xc)
    
    if (eax_5 == 0)
        if (sub_697860(esi_1 + 0x10) != 0)
            *(esi_1 + 8) = 0
    else if (eax_5 == 1)
        ChangeDisplaySettingsA(nullptr, 0)
        *(esi_1 + 8) = 0
    else if (eax_5 == 2)
        *(esi_1 + 8) = 0

int32_t* esi_2 = *(*(arg1 + 0x21c) + 0x14)

if (esi_2[4].b != 0)
    int32_t* ecx_4 = *esi_2
    int32_t eax_12
    
    if (ecx_4 != 0)
        eax_12 = (*(*ecx_4 + 0x4c))(ecx_4)
    
    if (ecx_4 == 0 || eax_12 s>= 0)
        esi_2[4].b = 0
    else
        sub_64b530("DirectDraw")

int32_t* ecx_5 = *esi_2

if (ecx_5 != 0)
    (*(*ecx_5 + 8))(ecx_5)
    *esi_2 = 0

ShowWindow(**(arg1 + 0xc), SW_HIDE)
DestroyWindow(arg2)
return 0
