// 函数: sub_6a569a
// 地址: 0x6a569a
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1
*arg1 += 1
int32_t* esi = arg1[0x1e]

if (esi != 0)
    *esi
    *esi += 1

int32_t* esi_1 = arg1[0x20]

if (esi_1 != 0)
    *esi_1
    *esi_1 += 1

int32_t* esi_2 = arg1[0x1f]

if (esi_2 != 0)
    *esi_2
    *esi_2 += 1

int32_t* esi_3 = arg1[0x22]

if (esi_3 != 0)
    *esi_3
    *esi_3 += 1

void* esi_4 = &arg1[7]
int32_t i_1 = 6
int32_t i

do
    if (*(esi_4 - 8) != &data_74ac94)
        int32_t* edi_1 = *esi_4
        
        if (edi_1 != 0)
            *edi_1
            *edi_1 += 1
    
    if (*(esi_4 - 0xc) != 0)
        int32_t* edi_2 = *(esi_4 - 4)
        
        if (edi_2 != 0)
            *edi_2
            *edi_2 += 1
    
    esi_4 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t* result = arg1[0x27] + 0xb0
*result
*result += 1
return result
