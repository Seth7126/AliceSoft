// 函数: sub_4894f0
// 地址: 0x4894f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 0x40); i != *(arg1 + 0x44); i = &i[3])
    for (int32_t* j = *i; j != i[1]; j = &j[1])
        (*(**j + 4))()

int32_t edi = *(arg1 + 0x44)
int32_t* esi_1 = *(arg1 + 0x40)

if (esi_1 == edi)
    *(arg1 + 0x44) = esi_1
    return esi_1

do
    int32_t eax_2 = *esi_1
    
    if (eax_2 != 0)
        j__free(eax_2)
        *esi_1 = 0
        esi_1[1] = 0
        esi_1[2] = 0
    
    esi_1 = &esi_1[3]
while (esi_1 != edi)

int32_t eax_3 = *(arg1 + 0x40)
*(arg1 + 0x44) = eax_3
return eax_3
