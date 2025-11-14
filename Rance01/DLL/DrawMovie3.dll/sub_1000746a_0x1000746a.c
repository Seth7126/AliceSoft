// 函数: sub_1000746a
// 地址: 0x1000746a
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* esi = arg1
int32_t eax = *(esi + 0xbc)
int32_t edi
int32_t var_10 = edi

if (eax != 0 && eax != &data_10020df8)
    int32_t* eax_1 = *(esi + 0xb0)
    
    if (eax_1 != 0 && *eax_1 == 0)
        int32_t* eax_2 = *(esi + 0xb8)
        
        if (eax_2 != 0 && *eax_2 == 0)
            sub_10003602(eax_2)
            sub_1000a81d(*(esi + 0xbc))
        
        int32_t* eax_3 = *(esi + 0xb4)
        
        if (eax_3 != 0 && *eax_3 == 0)
            sub_10003602(eax_3)
            sub_1000a7d8(*(esi + 0xbc))
        
        sub_10003602(*(esi + 0xb0))
        sub_10003602(*(esi + 0xbc))

int32_t* eax_4 = *(esi + 0xc0)

if (eax_4 != 0 && *eax_4 == 0)
    sub_10003602(*(esi + 0xc4) - 0xfe)
    sub_10003602(*(esi + 0xcc) - 0x80)
    sub_10003602(*(esi + 0xd0) - 0x80)
    sub_10003602(*(esi + 0xc0))

int32_t* eax_11 = *(esi + 0xd4)

if (eax_11 != &data_10020d38 && eax_11[0x2d] == 0)
    sub_1000a643(eax_11)
    sub_10003602(*(esi + 0xd4))

void* edi_2 = esi + 0x50
arg1 = 6
void* i

do
    if (*(edi_2 - 8) != &data_10020458)
        int32_t* eax_12 = *edi_2
        
        if (eax_12 != 0 && *eax_12 == 0)
            sub_10003602(eax_12)
    
    if (*(edi_2 - 4) != 0)
        int32_t* eax_13 = *(edi_2 + 4)
        
        if (eax_13 != 0 && *eax_13 == 0)
            sub_10003602(eax_13)
    
    edi_2 += 0x10
    i = arg1
    arg1 -= 1
while (i != 1)
return sub_10003602(esi)
