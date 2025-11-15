// 函数: sub_61dc50
// 地址: 0x61dc50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg3
int32_t* esi = arg2
void* edi = arg3

if (arg3 != arg2)
    do
        esi -= 0x10
        
        if (edi == esi)
            break
        
        sub_61e5f0(edi, esi)
        edi += 0x10
    while (edi != esi)

int32_t* edi_1 = arg2
int32_t* esi_1 = arg4

if (arg2 != arg4)
    do
        esi_1 -= 0x10
        
        if (edi_1 == esi_1)
            break
        
        sub_61e5f0(edi_1, esi_1)
        edi_1 = &edi_1[4]
    while (edi_1 != esi_1)

void* eax_1 = arg3
int32_t* esi_2 = arg4
void* edi_2 = eax_1

if (eax_1 != arg4)
    do
        esi_2 -= 0x10
        
        if (edi_2 == esi_2)
            break
        
        sub_61e5f0(edi_2, esi_2)
        edi_2 += 0x10
    while (edi_2 != esi_2)
    
    eax_1 = arg3

return eax_1 + ((arg4 - arg2) & 0xfffffff0)
