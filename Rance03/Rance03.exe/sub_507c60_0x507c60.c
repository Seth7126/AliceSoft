// 函数: sub_507c60
// 地址: 0x507c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t arg_4
int32_t arg_8
void* j_3
int32_t i_2
sub_506c00(arg1, &arg_4, &arg_8, &j_3, &i_2)
int32_t i_1 = i_2
void* j_2 = j_3

if (sub_506b50(arg1, arg_4, arg_8, j_2, i_1) != 0)
    return 0

int32_t* eax_2 = sub_5065e0(arg1)
char* esi_1 = (*(*eax_2 + 8))(arg_4, arg_8)
int32_t edi_2 = (*(*eax_2 + 0x1c))() - (j_2 << 2)

if (i_1 s> 0)
    int32_t i
    
    do
        if (j_2 s> 0)
            void* j_1 = j_2
            void* j
            
            do
                uint8_t ecx_8 = ((zx.d(*esi_1) * 0x132 + zx.d(esi_1[2]) * 0x75
                    + zx.d(esi_1[1]) * 0x259) u>> 0xa).b
                *esi_1 = ecx_8
                esi_1[1] = ecx_8
                esi_1[2] = ecx_8
                esi_1 = &esi_1[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        esi_1 = &esi_1[edi_2]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t eax_4
eax_4.b = 1
return eax_4
