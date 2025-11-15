// 函数: sub_5b3f50
// 地址: 0x5b3f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f360
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_c8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
void* var_84 = esi
char* edx = *(esi + 4)
struct _EXCEPTION_REGISTRATION_RECORD** i

if (&edx[4] u> *(esi + 8))
    i.b = 0
else
    uint32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(esi + 4) = &edx[4]
    
    if ((arg1[0xa] - arg1[8]) s>> 6 u< ebx_7)
        if (ebx_7 u> 0x3ffffff)
            sub_6d0927("vector<T> too long")
            noreturn
        
        sub_5b48c0(&arg1[8], ebx_7)
    
    int32_t var_78_1 = 0
    
    if (ebx_7 s<= 0)
    label_5b4181:
        int32_t* esi_2 = &arg1[8]
        int32_t ecx_8 = esi_2[1]
        
        for (i = *esi_2; i != ecx_8; i = &i[0x10])
            struct _EXCEPTION_REGISTRATION_RECORD* edx_2 = nullptr
            int32_t edi_12 = (esi_2[1] - *esi_2) s>> 6
            
            if (edi_12 s<= 0)
            label_5b41b2:
                edx_2 = 0xffffffff
            else
                int32_t* esi_4 = *esi_2 + 0x1c
                
                while (*esi_4 != i[8])
                    edx_2 = &edx_2->Next + 1
                    esi_4 = &esi_4[0x10]
                    
                    if (edx_2 s>= edi_12)
                        goto label_5b41b2
            
            esi_2 = &arg1[8]
            *i = edx_2
        
        i.b = 1
    else
        while (true)
            struct _EXCEPTION_REGISTRATION_RECORD** var_1c_1 = 0xf
            int32_t var_20_1 = 0
            char var_30 = 0
            int32_t var_8_1 = 0
            
            if (sub_61ed80(esi, &var_30) != 0)
                char* ecx_2 = *(esi + 4)
                
                if (&ecx_2[0x24] u<= *(esi + 8))
                    uint32_t eax_13 = zx.d(*ecx_2)
                    uint32_t ebx_13 =
                        ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8
                    *(esi + 4) = &ecx_2[4]
                    uint32_t edi_7 =
                        ((zx.d(ecx_2[7]) << 8 | zx.d(ecx_2[6])) << 8 | zx.d(ecx_2[5])) << 8
                        | zx.d(ecx_2[4])
                    *(esi + 4) = &ecx_2[8]
                    uint32_t var_90
                    sub_57d330(&var_90, esi)
                    int128_t var_b4
                    sub_5b3e70(&var_b4, esi)
                    float xmm1_1 = *arg1
                    float var_8c
                    int64_t xmm3_3 = _mm_unpacklo_ps(var_90 f* xmm1_1, var_8c * xmm1_1)
                    int32_t var_70 = 0xffffffff
                    int32_t var_58_1 = 0xf
                    int32_t var_5c_1 = 0
                    char var_6c = 0
                    sub_403590(&var_6c, &var_30, 0, 0xffffffff)
                    uint32_t var_54_1 = ebx_13 | eax_13
                    uint32_t var_50_1 = edi_7
                    int128_t var_4c_1 = var_b4
                    float var_88
                    float var_34_1 = var_88 * xmm1_1
                    int64_t var_3c_1 = xmm3_3
                    var_8_1.b = 1
                    sub_5b4480(&arg1[8], &var_70)
                    
                    if (var_58_1 u>= 0x10)
                        sub_403160(var_6c.d, var_58_1 + 1, 1)
                    
                    int32_t var_8_2 = 0xffffffff
                    
                    if (var_1c_1 u>= 0x10)
                        sub_403160(var_30.d, var_1c_1 + 1, 1)
                    
                    esi = var_84
                    int32_t edi_9 = var_78_1 + 1
                    var_78_1 = edi_9
                    
                    if (edi_9 s>= ebx_7)
                        goto label_5b4181
                    
                    continue
            
            if (var_1c_1 u< 0x10)
                break
            
            sub_403160(var_30.d, var_1c_1 + 1, 1)
            break
        
        i.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return i
