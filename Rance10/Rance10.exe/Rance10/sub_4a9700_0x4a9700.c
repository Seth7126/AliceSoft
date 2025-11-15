// 函数: sub_4a9700
// 地址: 0x4a9700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg2
int32_t* ecx = data_7fcb9c

if (ecx != 0)
    goto label_4a973c

int32_t* ecx_1 = data_7fcb88

if (ecx_1 == 0)
    return 

int32_t* eax = (**ecx_1)(0x7615c4)
data_7fcb9c = eax

if (eax == 0)
    return 

(**eax)()
ecx = data_7fcb9c
label_4a973c:

if (esi[5] u>= 0x10)
    esi = *esi

(*(*ecx + 0xc))(arg1, esi)
