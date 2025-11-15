// 函数: sub_693cb0
// 地址: 0x693cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747bb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0x20
void** result_1
sub_4cedf0(arg1 + 0x40, &result_1, &var_2c)
void** result_3 = result_1
void** result
int32_t* var_20
void** esi_1

if (result_3 != *(arg1 + 0x40))
    esi_1 = result_3[5]
label_693e29:
    
    if (sub_694c00(esi_1).b == 0)
        result.b = 0
    else
        result = *(arg1 + 0x54)
        void* esi_2 = *(arg1 + 4)
        
        if (result == 0)
            result.b = 0
        else
            result_1 = result
            
            if (*(esi_2 + 0x164) != result)
                int32_t* eax_11 = *(esi_2 + 0x38)
                (*(*eax_11 + 0x1c))(eax_11, 0, 1, &result_1)
                *(esi_2 + 0x164) = result_1
            
            sub_422370(&var_20, 4)
            int32_t var_8_3 = 2
            int32_t* edx_1 = var_20
            float xmm1_1 = 1f / _mm_cvtepi32_ps(zx.o(*(arg2 + 4)))
            *edx_1 = xmm1_1 + xmm1_1
            edx_1[1] = -2f / _mm_cvtepi32_ps(zx.o(*(arg2 + 8)))
            edx_1[2] = 0xbf800000
            edx_1[3] = 0x3f800000
            void* ebx
            ebx.b = sub_684cb0(arg1 + 0x50, edx_1, *(*(arg1 + 4) + 0x38)) != 0
            sub_4043e0(&var_20)
            result.b = ebx.b
else
    char* var_44 = nullptr
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    int32_t var_8_1 = 0
    int32_t* var_58_1 = &var_44
    result = sub_682290(arg1 + 8, 0x20)
    char* edi_1 = var_44
    
    if (result.b != 0)
        result_1.b = 0
        void** result_2 = result_1
        var_20 = nullptr
        int32_t var_1c_1 = 4
        int32_t var_18_1 = 6
        void* var_38 = nullptr
        int32_t var_34_1 = 0
        int32_t var_30_1 = 0
        sub_452440(&var_38, &var_20, &var_14)
        var_8_1.b = 1
        esi_1 = sub_6867b0(*(arg1 + 4))
        
        if (esi_1 != 0)
            int32_t* var_58_2 = &var_38
            
            if (sub_694b30(esi_1, edi_1, var_40_1 - edi_1) != 0)
                void* var_28
                sub_4cfa60(arg1 + 0x40, &var_28, &var_2c)
                *(var_28 + 0x14) = esi_1
                sub_4043e0(&var_38)
                int32_t var_8_2 = 0xffffffff
                sub_4059a0(&var_44)
                goto label_693e29
            
            (*(*esi_1 + 4))(eax_2)
        
        void* ecx_8 = var_38
        
        if (ecx_8 != 0)
            sub_403160(ecx_8, (var_30_1 - ecx_8) s>> 2, 4)
    
    if (edi_1 == 0)
        result.b = 0
    else
        sub_403160(edi_1, var_3c_1 - edi_1, 1)
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return result
