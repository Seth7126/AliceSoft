// 函数: sub_4a0320
// 地址: 0x4a0320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4a2e90(arg1)
(*(**(arg1 + 0x2b8) + 8))()
sub_4a6400(arg1 + 0x74)
void* ecx_2 = *(arg1 + 0x148)

if (ecx_2 != 0)
    sub_47e630(ecx_2)

(*(*(arg1 + 4) + 0x1c))()
void* edi = *(arg1 + 0x148)

if (edi != 0 && *(edi + 0x3f) == 0)
    ShowCursor(1)
    *(edi + 0x3f) = 1

*(arg1 + 0x148) = 0
void* edi_1 = *(arg1 + 0x244)

if (*(edi_1 + 8) != 0)
    int32_t eax_2 = *(edi_1 + 0xc)
    
    if (eax_2 == 0)
        if (sub_6cd7a0(edi_1 + 0x10) != 0)
            *(edi_1 + 8) = 0
    else if (eax_2 == 1)
        ChangeDisplaySettingsA(nullptr, 0)
        *(edi_1 + 8) = 0
    else if (eax_2 == 2)
        *(edi_1 + 8) = 0

sub_6cd410(*(*(arg1 + 0x244) + 0x14))
ShowWindow(**(arg1 + 0x10), SW_HIDE)
DestroyWindow(arg2)
return 0
