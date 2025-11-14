// 函数: sub_48fbf0
// 地址: 0x48fbf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb26b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *(arg1 + 8)
*(arg1 + 0x14) = 0xffffffff

for (; i != *(arg1 + 0xc); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (*(*ecx + 8))(1)

*(arg1 + 0xc) = *(arg1 + 8)
int32_t arg_4
int32_t ebx_1 = arg_4
char* ecx_1 = *(ebx_1 + 4)
uint32_t result

if (&ecx_1[4] u> *(ebx_1 + 8))
    result.b = 0
else
    int32_t var_14_1 = 0
    uint32_t edi_7 =
        ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
    *(ebx_1 + 4) = &ecx_1[4]
    
    if (edi_7 s<= 0)
    label_48fd0e:
        result.b = 1
    else
        while (true)
            int32_t eax_6 = sub_69adc6(0x60)
            arg_4 = eax_6
            int32_t var_4 = 0
            struct IInterface::partsengine::CFlatLayerData::VTable** esi
            
            if (eax_6 == 0)
                esi = nullptr
            else
                esi = sub_48e2e0(eax_6)
            
            int32_t var_30_1 = arg2
            int32_t var_4_1 = 0xffffffff
            arg_4 = esi
            
            if (sub_48e680(esi, ebx_1).b == 0)
                if (esi != 0)
                    (*esi)->vFunc_2(1)
                
                break
            
            sub_412de0(arg1 + 8, &arg_4)
            int32_t eax_8 = arg_4
            int32_t ecx_6 = *(eax_8 + 0x40) + *(eax_8 + 0x3c) - 1
            void* eax_11 = &arg_4
            bool cond:1_1 = *(arg1 + 0x14) s>= ecx_6
            arg_4 = ecx_6
            
            if (cond:1_1)
                eax_11 = arg1 + 0x14
            
            int32_t esi_2 = var_14_1 + 1
            var_14_1 = esi_2
            *(arg1 + 0x14) = *eax_11
            
            if (esi_2 s>= edi_7)
                goto label_48fd0e
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
