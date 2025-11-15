// 函数: sub_5a8ab0
// 地址: 0x5a8ab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f066
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

void* edx = arg7
int32_t* arg_14
float* ecx_2 = arg_14
float* eax_4 = arg6
float xmm7_1 = ecx_2[2] * eax_4[1]
int32_t xmm1 = *(edx + 0x24)
float xmm6 = *eax_4
int32_t xmm2 = *(edx + 0x28)
int32_t var_30 = *(edx + 0x20)
int32_t var_2c = xmm1
float xmm1_1 = *ecx_2
float xmm7_2 = xmm7_1 - ecx_2[1] * eax_4[2]
int32_t var_28 = xmm2
float xmm2_2 = xmm1_1 * eax_4[2] - xmm6 * ecx_2[2]
float xmm6_2 = xmm6 * ecx_2[1] - xmm1_1 * eax_4[1]
float xmm0_11 = sub_484cc0(xmm7_2 * xmm7_2 + xmm2_2 * xmm2_2 + xmm6_2 * xmm6_2)
xmm0_11 f- 0
eax_4:1.b = (xmm0_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2
    | (xmm0_11 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    float xmm1_7 = 1f / xmm0_11
    xmm7_2 = xmm7_2 * xmm1_7
    xmm2_2 = xmm2_2 * xmm1_7
    xmm6_2 = xmm6_2 * xmm1_7

*(arg1 + 0x38) = *(arg1 + 0x34)
*(arg1 + 0x4c) = *(arg1 + 0x48)
float var_1c = xmm6_2
float var_20 = xmm2_2
float var_24 = xmm7_2
float ecx_3 = arg3[0x88]

if (ecx_3 != 0 &&
        sub_5a9140(arg1, arg2, arg3, ecx_3, arg5, arg6, arg_14, &var_24, edx, arg8, arg9, arg10).b != 0)
    arg_14.b = 0
    sub_598e90(&arg_14, *(arg1 + 0x38), *(arg1 + 0x34), &arg_14)
    
    if (sub_598bc0(arg1 + 0x34, arg10).b != 0 && sub_598d90(arg1 + 0x34).b != 0)
        struct sealengine::CSphereVolumeList::VTable* const var_40
        int32_t var_3c
        
        if (*(arg1 + 0x48) != *(arg1 + 0x4c))
            char* esi_1 = *(arg1 + 0x4c)
            int32_t* ecx_8 = *(arg1 + 0x48)
            arg_14.b = 0
            
            if (ecx_8 != esi_1)
                int32_t var_44 = 0
                var_40 = nullptr
                int32_t edi_4 = (esi_1 - ecx_8) s>> 2
                var_3c = 0
                int32_t eax_11
                int32_t edx_2
                edx_2:eax_11 = sx.q(edi_4 + 1)
                int32_t var_38_1 = (eax_11 - edx_2) s>> 1
                int32_t* var_34_1 = &var_44
                int32_t var_8_1 = 0
                sub_5ab920(&var_44, esi_1, ecx_8, edi_4, &var_44, &arg_14)
                int32_t var_8_2 = 0xffffffff
                int32_t eax_15 = var_44
                
                if (eax_15 != 0)
                    _free(eax_15)
        
        *(arg1 + 0x58) = 0
        *(arg1 + 0x5c) = 0
        *(arg1 + 0x60) = 0
        *(arg1 + 0x64) = 0
        int32_t* i_1 = *(arg1 + 0x48)
        
        if (i_1 != *(arg1 + 0x4c))
            var_40 = &sealengine::CSphereVolumeList::`vftable'
            var_3c = 0
            int32_t var_38_2 = 0
            int32_t var_34_2 = 0
            int32_t var_8_3 = 1
            int32_t* i = i_1
            
            for (int32_t edi_5 = *(arg1 + 0x4c); i != edi_5; i = &i[1])
                if ((*(**i + 0x14))(eax_2) != 0)
                    sub_5dbf60(&var_3c, (*(**i + 0x18))())
            
            struct sealengine::CSphereVolume::VTable* var_58
            struct sealengine::CSphereVolume::VTable** eax_21 = sub_5dbdd0(&var_40, &var_58)
            *(arg1 + 0x58) = *(eax_21 + 4)
            *(arg1 + 0x60) = eax_21[3]
            *(arg1 + 0x64) = eax_21[4]
            int32_t var_8_4 = 2
            sub_5ab840(&var_3c)
            int32_t var_8_5 = 0xffffffff
        
        sub_5a9420(arg1, arg2, arg4)
        int32_t* var_6c_9 = &var_30
        bool eax_23 = sub_5a94f0(arg1, arg2, arg3, arg10) != 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_23

int32_t* eax_7
eax_7.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
