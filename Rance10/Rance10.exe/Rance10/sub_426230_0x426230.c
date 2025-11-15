// 函数: sub_426230
// 地址: 0x426230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_854
int32_t eax_1 = __security_cookie ^ &var_854
*(arg1 + 8) = *(arg1 + 4)
uint32_t var_848

if (sub_6c9790(arg2, &var_848).b == 0)
label_42626d:
    void* eax_3
    eax_3.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_854)
    return eax_3

int32_t var_840 = 0xffffffff
uint32_t var_83c[0x82][0x4]
_memset(&var_83c, 0, 0x824)
uint32_t ebx_1 = var_848
uint32_t var_18_1 = ebx_1
int32_t var_14_1 = 0
sub_4a7790(&var_840, ebx_1)
void* var_84c_1 = nullptr
void* eax_4

if (ebx_1 s> 0)
    int32_t esi_1 = var_840
    
    do
        int32_t esi_2 = esi_1 + 1
        var_840 = esi_2
        
        if (esi_2 s>= 0x209)
            sub_4a7690(&var_840)
            esi_2 = 0
            var_840 = 0
        
        if (sub_6c95a0(arg2, (var_83c[0][esi_2] & 3) + 1).b == 0)
            goto label_42626d
        
        esi_1 = esi_2 + 1
        var_840 = esi_1
        
        if (esi_1 s>= 0x209)
            sub_4a7690(&var_840)
            esi_1 = 0
        
        int32_t ecx_8 = *(arg2 + 0xc)
        char* edx_1 = *(arg2 + 4)
        void* const eax_8
        eax_8.b = ecx_8 != 0
        
        if (eax_8 + 1 + edx_1 u> *(arg2 + 8))
            goto label_42626d
        
        ebx_1.b = *edx_1
        *(arg2 + 4) = &edx_1[1]
        
        if (ecx_8 != 0)
            void* eax_10
            eax_10.b = edx_1[1]
            ebx_1.b <<= ecx_8.b
            ecx_8.b = 8
            ecx_8.b = 8 - *(arg2 + 0xc)
            eax_10.b u>>= ecx_8.b
            ebx_1.b |= eax_10.b
        
        char var_84d = ebx_1.b
        sub_4263a0(arg1 + 4, &var_84d)
        eax_4 = var_84c_1 + 1
        var_84c_1 = eax_4
    while (eax_4 s< var_848)

eax_4.b = 1
@__security_check_cookie@4(eax_1 ^ &var_854)
return eax_4
