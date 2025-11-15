// 函数: sub_65ac60
// 地址: 0x65ac60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg1
int32_t i = 0
void* var_4 = ebp
void* esi = *(ebp + 0x19c)
int32_t edi = *(ebp + 0x124)
void* var_8 = esi
int32_t var_14 = edi
int32_t i_1 = 0

if (*(ebp + 0x24) s<= 0)
    return 

int32_t* ecx_1 = *(ebp + 0xc4) + 0xc
int32_t* var_c_1 = ecx_1

do
    int32_t j_1 = divs.dp.d(sx.q(ecx_1[7] * *ecx_1), *(ebp + 0x124))
    void* ecx_4 = *(*(esi + 0x3c) + (i << 2))
    
    if (j_1 s> 0)
        void* edi_1 = ecx_4 + (((edi + 2) * j_1) << 2)
        void* esi_2 = ecx_4 - (j_1 << 2)
        int32_t* edx_3 = *(*(esi + 0x38) + (i << 2)) - ecx_4
        void* ebx = ecx_4 + (((var_14 + 1) * j_1) << 2)
        int32_t j
        
        do
            int32_t eax_10 = *(edx_3 + ebx)
            ebx += 4
            *(edx_3 + esi_2) = eax_10
            esi_2 += 4
            ecx_4 += 4
            *(esi_2 - 4) = *(ebx - 4)
            edi_1 += 4
            *(edx_3 + edi_1 - 4) = *(edx_3 + ecx_4 - 4)
            *(edi_1 - 4) = *(ecx_4 - 4)
            j = j_1
            j_1 -= 1
        while (j != 1)
        i = i_1
        esi = var_8
        edi = var_14
    
    ebp = var_4
    i += 1
    ecx_1 = &var_c_1[0x16]
    i_1 = i
    var_c_1 = ecx_1
while (i s< *(ebp + 0x24))
