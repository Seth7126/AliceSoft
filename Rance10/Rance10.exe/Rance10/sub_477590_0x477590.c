// 函数: sub_477590
// 地址: 0x477590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 s< 0)
    return 

int32_t edx_1 = data_7fcc74

if (arg1 u>= (data_7fcc78 - edx_1) s>> 2)
    return 

int32_t* edi_1 = arg1 << 2
int32_t* ecx = *(edi_1 + edx_1)

if (ecx == 0)
    return 

int32_t esi_1 = ecx[1]
ecx[1] -= 1
(**ecx)(esi_1 - 1)
*(edi_1 + data_7fcc74) = 0
