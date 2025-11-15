// 函数: sub_6b5020
// 地址: 0x6b5020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg1
int32_t esi = 0xffffffff
int32_t eax = edi[0xd2]
sub_6b2cf0(arg2, *edi, 5)
int32_t i_5 = 0

if (*edi s> 0)
    void* ebp_1 = &edi[1]
    int32_t i
    
    do
        sub_6b2cf0(arg2, *ebp_1, 4)
        
        if (esi s< *ebp_1)
            esi = *ebp_1
        
        i = i_5 + 1
        ebp_1 += 4
        i_5 = i
    while (i s< *edi)

int32_t i_7 = esi + 1

if (esi + 1 s> 0)
    void* var_10 = &edi[0x50]
    void* esi_2 = &edi[0x30]
    int32_t i_1
    
    do
        sub_6b2cf0(arg2, *(esi_2 - 0x40) - 1, 3)
        sub_6b2cf0(arg2, *esi_2, 2)
        
        if (*esi_2 != 0)
            sub_6b2cf0(arg2, *(esi_2 + 0x40), 8)
        
        int32_t j = 0
        
        if (1 << (*esi_2).b s> 0)
            void* edi_1 = var_10
            
            do
                sub_6b2cf0(arg2, *edi_1 + 1, 8)
                edi_1 += 4
                j += 1
            while (j s< 1 << (*esi_2).b)
        
        var_10 += 0x20
        esi_2 += 4
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)
    edi = arg1

sub_6b2cf0(arg2, edi[0xd0] - 1, 2)
int32_t eax_11 = 0

if (eax != 0)
    for (uint32_t i_2 = eax - 1; i_2 != 0; i_2 u>>= 1)
        eax_11 += 1

int32_t i_3 = sub_6b2cf0(arg2, eax_11, 4)
int32_t ebp_2 = 0

if (eax != 0)
    for (i_3 = eax - 1; i_3 != 0; i_3 u>>= 1)
        ebp_2 += 1

int32_t i_4 = 0
int32_t ecx_3 = 0
int32_t i_6 = 0

if (*edi s> 0)
    i_3 = &edi[1]
    int32_t esi_4 = 0
    int32_t i_8 = i_3
    
    do
        esi_4 += edi[*i_3 + 0x20]
        
        if (ecx_3 s< esi_4)
            int32_t j_2 = esi_4 - ecx_3
            void* esi_6 = &edi[0xd3 + ecx_3]
            int32_t ecx_4 = ecx_3 + j_2
            int32_t j_1
            
            do
                sub_6b2cf0(arg2, *esi_6, ebp_2)
                esi_6 += 4
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
            ecx_3 = ecx_4
            edi = arg1
            i_4 = i_6
        
        i_4 += 1
        i_3 = i_8 + 4
        i_6 = i_4
        i_8 = i_3
    while (i_4 s< *edi)

return i_3
