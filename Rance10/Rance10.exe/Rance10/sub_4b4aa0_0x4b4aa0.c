// 函数: sub_4b4aa0
// 地址: 0x4b4aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
void* esi = *(arg1 + 0xa0)
*(arg1 + 0xd0) = 0
sub_4eec50(esi, 0x10, 1)
int32_t* result = *(esi + 0x74)

if (result[0x10].b != 0)
    result[0x10].b = 0

int32_t edi = *(arg1 + 0xa8)
int32_t ebx = *(arg1 + 0xac)

if (edi s> 0 && ebx s> 0)
    void* esi_1 = *(arg1 + 0xa0)
    int32_t eax = *(arg1 + 0xbc)
    sub_4eec50(esi_1, 0x10, 1)
    void* eax_1 = *(esi_1 + 0x74)
    void* esi_2 = *(eax_1 + 0x44)
    sub_555e00(esi_2, 0x18, 1)
    sub_54b7a0(*(esi_2 + 0x80))
    void* esi_4 = *(eax_1 + 0x44)
    sub_555e00(esi_4, 0x18, 1)
    sub_54b7e0(*(esi_4 + 0x80), edi, ebx)
    int32_t esi_5 = *(arg1 + 0xbc)
    int32_t edi_1 = *(arg1 + 0xb8)
    int32_t ebx_1 = *(arg1 + 0xb4)
    void* eax_3 = *(eax_1 + 0x44)
    int32_t ebp_2 = *(arg1 + 0xb0)
    sub_555e00(eax_3, 0x18, 1)
    int32_t var_34_2 = esi_5
    int32_t var_38_2 = edi_1
    int32_t var_3c_1 = ebx_1
    int32_t var_40_1 = ebp_2
    int32_t var_44_1 = ebx
    int32_t var_48_1 = edi
    sub_54bc60(*(eax_3 + 0x80))
    int32_t edi_2 = ebx
    int32_t edx_1 = ebx
    int32_t esi_6 = edi
    int32_t eax_4 = *(arg1 + 0xc0)
    
    if (eax_4 s< ebx)
        edi_2 = eax_4
    
    int32_t eax_5 = *(arg1 + 0xc4)
    
    if (eax_5 s< ebx)
        edx_1 = eax_5
    
    int32_t eax_6 = *(arg1 + 0xc8)
    int32_t var_18_2 = edx_1
    
    if (eax_6 s< edi)
        esi_6 = eax_6
    
    int32_t eax_7 = *(arg1 + 0xcc)
    int32_t ecx_10 = edi
    
    if (eax_7 s< edi)
        ecx_10 = eax_7
    
    if (edi_2 != 0)
        void* esi_7 = *(eax_1 + 0x44)
        int32_t ecx_12 = sub_555e00(esi_7, 0x18, 1)
        int32_t var_34_3 = eax
        sub_54bf90(*(esi_7 + 0x80), ecx_12, 0, edi, edi_2, 0)
        edx_1 = var_18_2
    
    if (edx_1 != 0)
        void* esi_8 = *(eax_1 + 0x44)
        sub_555e00(esi_8, 0x18, 1)
        int32_t var_34_4 = 0
        sub_54bf90(*(esi_8 + 0x80), var_18_2, ebx - var_18_2, edi, var_18_2, eax)
    
    if (esi_6 != 0)
        void* esi_9 = *(eax_1 + 0x44)
        int32_t ecx_18 = sub_555e00(esi_9, 0x18, 1)
        int32_t var_34_5 = eax
        sub_54c050(*(esi_9 + 0x80), 0, ecx_18, esi_6, ebx, 0)
    
    if (ecx_10 != 0)
        void* esi_10 = *(eax_1 + 0x44)
        int32_t ecx_21 = sub_555e00(esi_10, 0x18, 1)
        int32_t var_34_6 = 0
        sub_54c050(*(esi_10 + 0x80), edi - ecx_10, ecx_21, ecx_10, ebx, eax)
    
    void* esi_11 = *(eax_1 + 0x44)
    sub_555e00(esi_11, 0x18, 1)
    result = sub_54c110(*(esi_11 + 0x80))

var_4
return result
