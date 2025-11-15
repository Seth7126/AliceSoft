// 函数: sub_474ca0
// 地址: 0x474ca0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4_1 = arg3
void** esi = arg2
void** edi = arg3

if (arg3 != arg2)
    do
        esi -= 0x38
        
        if (edi == esi)
            break
        
        sub_474d50(edi, esi)
        edi = &edi[0xe]
    while (edi != esi)

void** edi_1 = arg2
void** esi_1 = arg4

if (arg2 != arg4)
    do
        esi_1 -= 0x38
        
        if (edi_1 == esi_1)
            break
        
        sub_474d50(edi_1, esi_1)
        edi_1 = &edi_1[0xe]
    while (edi_1 != esi_1)

void** edi_2 = arg3
void** esi_2 = arg4

if (edi_2 != arg4)
    do
        esi_2 -= 0x38
        
        if (edi_2 == esi_2)
            break
        
        sub_474d50(edi_2, esi_2)
        edi_2 = &edi_2[0xe]
    while (edi_2 != esi_2)

return &arg3[(arg4 - arg2) s/ 0x38 * 0xe]
