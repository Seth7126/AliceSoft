// 函数: sub_61cd20
// 地址: 0x61cd20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4 = ecx
void* esi = data_75d530
int32_t* eax

if (*(esi + 4) != 0)
label_61cd53:
    void* eax_1 = *(esi + 4)
    *(eax_1 + 0x28) = 1
    eax = eax_1 + 4
    bool cond:0_1 = eax[5] u< 0x10
    eax[4] = 0
    
    if (not(cond:0_1))
        eax = *eax
    
    *eax = 0
else if (data_75d534 != 0)
    int32_t var_c_1 = ecx
    eax = sub_6203f0()
    
    if (eax != 0)
        eax = (**eax)(&data_6ecca8)
        *(esi + 4) = eax
        
        if (eax != 0)
            goto label_61cd53
