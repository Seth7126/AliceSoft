// 函数: sub_502fc0
// 地址: 0x502fc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736f9d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg1 + 4)
int32_t esi = *(arg1 + 8)

if (&edx[4] u<= esi)
    uint32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg1 + 4) = &edx[4]
    
    if (&edx[8] u<= esi)
        uint32_t edx_7 =
            ((zx.d(edx[7]) << 8 | zx.d(edx[6])) << 8 | zx.d(edx[5])) << 8 | zx.d(edx[4])
        *(arg1 + 4) = &edx[8]
        uint32_t var_1c
        uint32_t result_1
        
        if (sub_61ec90(arg1, &var_1c) != 0 && sub_61ec90(arg1, &result_1) != 0)
            void* var_28
            sub_5031e0(&var_28, result_1)
            int32_t var_8_1 = 0
            void* esi_1 = var_28
            int32_t var_24
            uint32_t result
            
            if (esi_1 == var_24)
            label_5030ab:
                result = sub_6e810c(0x1c)
                result_1 = result
                var_8_1.b = 2
                *(result + 8) = edx_7
                *(result + 0xc) = var_1c
                *result = &partsengine::CGUIMessage::`vftable'
                *(result + 4) = ebx_7
                sub_503120(result + 0x10, &var_28)
            else
                while (true)
                    if (sub_503980(esi_1, arg1) == 0)
                        result = 0
                        break
                    
                    esi_1 += 0x2c
                    
                    if (esi_1 == var_24)
                        goto label_5030ab
            
            int32_t var_8_2 = 3
            sub_4adfc0(&var_28)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
