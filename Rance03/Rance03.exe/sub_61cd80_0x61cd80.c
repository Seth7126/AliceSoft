// 函数: sub_61cd80
// 地址: 0x61cd80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_esi_2
int32_t __saved_esi_3 = __saved_esi_2
void* edi = data_75d530

if (*(edi + 4) != 0)
label_61cdb3:
    void* edi_1 = *(edi + 4)
    HIMC eax_1 = ImmGetContext(*(edi_1 + 0x6c))
    ImmSetOpenStatus(eax_1, 1)
    ImmReleaseContext(*(edi_1 + 0x6c), eax_1)
else if (data_75d534 != 0)
    int32_t __saved_esi_1 = __saved_esi_2
    int32_t* eax = sub_6203f0()
    
    if (eax != 0)
        eax = (**eax)(&data_6ecca8)
        *(edi + 4) = eax
        
        if (eax != 0)
            goto label_61cdb3
