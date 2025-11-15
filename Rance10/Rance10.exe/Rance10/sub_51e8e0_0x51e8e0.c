// 函数: sub_51e8e0
// 地址: 0x51e8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t ebx = arg1[0x44]
uint32_t edi = arg1[0x45]
*(arg1 + 0x1b9) = 0

if (ebx s> 0 && edi s> 0)
    void* esi_1 = arg1[0x28]
    sub_4eec50(esi_1, 0x10, 1)
    void* eax_1 = *(esi_1 + 0x74)
    void* esi_2 = arg1[0x2a]
    sub_4eec50(esi_2, 0x10, 1)
    void* eax_2 = *(esi_2 + 0x74)
    void* esi_4 = *(eax_1 + 0x44)
    sub_555e00(esi_4, 0x18, 1)
    sub_54b7a0(*(esi_4 + 0x80))
    void* eax_3 = &arg1[0x67]
    uint32_t var_64_1
    int32_t var_60
    uint32_t var_34
    int32_t var_30
    
    if (arg1[0x6b] != 0)
        bool cond:1_1 = *(eax_3 + 0x14) u< 0x10
        var_30 = 0
        var_34 = 0
        
        if (not(cond:1_1))
            eax_3 = *eax_3
        
        sub_44c5f0(eax_3, &var_30, &var_34)
        
        if (ebx s< var_30)
            ebx = var_30
        
        void* esi_8 = *(eax_1 + 0x44)
        
        if (edi s< var_34)
            edi = var_34
        
        sub_555e00(esi_8, 0x18, 1)
        sub_54b7e0(*(esi_8 + 0x80), ebx, edi)
        uint32_t ecx_14 = var_34
        int32_t eax_19 = var_30
        uint32_t var_54_6 = ecx_14
        int32_t var_58_4 = eax_19
        var_64_1 = ecx_14
        int32_t var_68_1 = eax_19
        sub_518240(eax_1, &arg1[0x67])
    else
        int32_t eax_4 = arg1[0x5b]
        int32_t eax_5 = arg1[0x5c]
        int32_t eax_6 = arg1[0x5d]
        int32_t eax_7 = arg1[0x5e]
        int32_t eax_8 = arg1[0x5f]
        int32_t eax_9 = arg1[0x60]
        int32_t eax_10 = arg1[0x61]
        var_34 = arg1[0x62]
        var_30 = arg1[0x63]
        void* esi_5 = *(eax_1 + 0x44)
        sub_555e00(esi_5, 0x18, 1)
        int32_t var_4c_2 = sub_54b880(*(esi_5 + 0x80), ebx, edi)
        int32_t var_58_1
        
        if (arg1[0x53].b != 0)
            int32_t var_50_3 = eax_9
            int32_t var_54_2 = eax_8
            var_58_1 = eax_7
        else
            int32_t var_50_2 = eax_6
            int32_t var_54_1 = eax_5
            var_58_1 = eax_4
        
        int32_t var_68
        int32_t var_64
        sub_5181c0(eax_1, var_68, var_64, ebx, edi, var_58_1)
        void* esi_6 = *(eax_1 + 0x44)
        sub_555e00(esi_6, 0x18, 1)
        sub_54bd30(*(esi_6 + 0x80), 1, 1, ebx - 2, edi - 2, eax_10, var_34, var_30)
        void* esi_7 = *(eax_1 + 0x44)
        sub_555e00(esi_7, 0x18, 1)
        var_60 = 0
        var_64_1 = 0
        sub_54bd30(*(esi_7 + 0x80), 0, 0, ebx, edi, eax_10, var_34, var_30)
    void* esi_9 = *(eax_1 + 0x44)
    sub_555e00(esi_9, 0x18, 1)
    sub_54c110(*(esi_9 + 0x80))
    void* esi_10 = *(eax_2 + 0x44)
    sub_555e00(esi_10, 0x18, 1)
    sub_54b7a0(*(esi_10 + 0x80))
    int32_t eax_23 = (*(*arg1 + 0x28))(1)
    void* esi_11 = *(eax_2 + 0x44)
    sub_555e00(esi_11, 0x18, 1)
    sub_54b880(*(esi_11 + 0x80), 1, eax_23 - 6)
    int32_t ebx_2 = arg1[0x4b]
    int32_t ebp_2 = arg1[0x4a]
    int32_t eax_24 = arg1[0x49]
    int32_t esi_12 = (*(*arg1 + 0x28))(1) - 6
    void* edi_3 = *(eax_2 + 0x44)
    sub_555e00(edi_3, 0x18, 1)
    int32_t var_4c_8 = ebx_2
    int32_t var_50_8 = ebp_2
    sub_54b9e0(*(edi_3 + 0x80), var_64_1, var_60, 1, esi_12, eax_24)
    void* esi_13 = *(eax_2 + 0x44)
    sub_555e00(esi_13, 0x18, 1)
    sub_54c110(*(esi_13 + 0x80))

void* esi_14 = arg1[0x28]
sub_4eec50(esi_14, 0x10, 1)
void* eax_28 = *(esi_14 + 0x74)

if (*(eax_28 + 0x40) != 0)
    *(eax_28 + 0x40) = 0

void* esi_15 = arg1[0x2a]
sub_4eec50(esi_15, 0x10, 1)
void* eax_29 = *(esi_15 + 0x74)

if (*(eax_29 + 0x40) != 0)
    *(eax_29 + 0x40) = 0

void* esi_16 = arg1[0x29]
sub_4eec50(esi_16, 0x10, 1)
void* eax_30 = *(esi_16 + 0x74)

if (*(eax_30 + 0x40) != 0)
    *(eax_30 + 0x40) = 0

void* result = arg1[0x28]
*(result + 0x1a8) = 1
var_4
return result
