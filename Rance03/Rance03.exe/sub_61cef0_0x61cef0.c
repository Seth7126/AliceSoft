// 函数: sub_61cef0
// 地址: 0x61cef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4 = ecx
void* esi = data_75d530
int32_t* eax

if (*(esi + 4) != 0)
label_61cf26:
    eax = *(esi + 4) + 4
    eax[4] = 0
    
    if (eax[5] u>= 0x10)
        eax = *eax
    
    *eax = 0
else if (data_75d534 != 0)
    int32_t var_c_1 = ecx
    eax = sub_6203f0()
    
    if (eax != 0)
        eax = (**eax)(&data_6ecca8)
        *(esi + 4) = eax
        
        if (eax != 0)
            goto label_61cf26
