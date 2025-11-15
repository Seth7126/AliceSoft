// 函数: sub_45b040
// 地址: 0x45b040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0 || arg2 == 0 || (*(*arg1 + 0x10))() != (*(*arg2 + 0x10))()
        || (*(*arg1 + 0x14))() != (*(*arg2 + 0x14))())
    return 

char* esi_3 = (*(*arg1 + 8))(0, 0)
int32_t eax_8 = (*(*arg1 + 0x10))()
int32_t eax_9 = (*(*arg1 + 0x1c))()
int32_t j_2 = (*(*arg1 + 0x10))()
int32_t i_1 = (*(*arg1 + 0x14))()
void* edi_4 = (*(*arg2 + 8))(0, 0)
int32_t* eax = (*(*arg2 + 0x1c))() - (j_2 << 2)
arg2 = eax

if (i_1 s<= 0)
    return 

int32_t i

do
    if (j_2 s> 0)
        int32_t j_1 = j_2
        int32_t j
        
        do
            *esi_3 = *edi_4
            esi_3[1] = *(edi_4 + 1)
            char eax_17 = *(edi_4 + 2)
            edi_4 += 4
            esi_3[2] = eax_17
            esi_3[3] = 0xff
            esi_3 = &esi_3[4]
            j = j_1
            j_1 -= 1
        while (j != 1)
        eax = arg2
    
    esi_3 += eax_9 - (eax_8 << 2)
    edi_4 += eax
    i = i_1
    i_1 -= 1
while (i != 1)
