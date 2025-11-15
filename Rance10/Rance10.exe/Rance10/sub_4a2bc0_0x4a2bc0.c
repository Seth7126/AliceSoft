// 函数: sub_4a2bc0
// 地址: 0x4a2bc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_8 = edi
(*(*arg1 + 0x80))(0)

if (arg1[0x43] != 0)
    (*(*arg1[0x43] + 0x44))()
    (*(*arg1[0x43] + 0x48))()

void* ecx_2 = arg1[0x51]

if (ecx_2 != 0)
    sub_47e630(ecx_2)

void* edi_1 = arg1[0x51]

if (edi_1 != 0)
    if (*(edi_1 + 0x3e) != 0)
        if (*(edi_1 + 0x3c) == 0 && *(edi_1 + 0x25) == 0 && *(edi_1 + 0x3f) == 0)
            ShowCursor(1)
            *(edi_1 + 0x3f) = 1
        
        sub_47e590(edi_1)
        *(edi_1 + 0x3e) = 0
    
    void* edi_2 = arg1[0x51]
    
    if (*(edi_2 + 0x3f) == 0)
        ShowCursor(1)
        *(edi_2 + 0x3f) = 1

int32_t eax_3 = *arg1
arg1[0x51] = 0
jump(*(eax_3 + 0x1c))
