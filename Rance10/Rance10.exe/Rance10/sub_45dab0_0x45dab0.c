// 函数: sub_45dab0
// 地址: 0x45dab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t j_2 = (*(*arg2 + 0x10))()
int32_t i_1 = (*(*arg2 + 0x14))()

if (j_2 s<= 0 || i_1 s<= 0)
    int32_t eax_2
    eax_2.b = 0
    return eax_2

sub_405950(arg1, i_1 * j_2 * 3)
char* edi_1 = *arg1
char* esi_1 = (*(*arg2 + 8))(0, 0)
int32_t edx_2 = (*(*arg2 + 0x1c))() - (j_2 << 2)
uint32_t eax_7

if (i_1 s> 0)
    int32_t i
    
    do
        if (j_2 s> 0)
            int32_t j_1 = j_2
            int32_t j
            
            do
                *edi_1 = *esi_1
                edi_1[1] = esi_1[1]
                eax_7 = zx.d(esi_1[2])
                esi_1 = &esi_1[4]
                edi_1[2] = eax_7.b
                edi_1 = &edi_1[3]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        esi_1 = &esi_1[edx_2]
        i = i_1
        i_1 -= 1
    while (i != 1)

eax_7.b = 1
return eax_7
