// 函数: ?DynamicResourceManager@ResourceManager@details@Concurrency@@AAEXXZ
// 地址: 0x6ece6c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x10
int32_t (* var_c)(void* arg1) = sub_74a6e2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
void* const var_34_3 = &data_6ece78
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0x64
uint32_t dwMilliseconds = 0x64
uint32_t eax
int32_t edx
eax, edx = j____crtGetTickCount64()
uint32_t result = eax - 0x1f4
uint32_t result_1 = result
int32_t var_1c = adc.d(edx, 0xffffffff, eax u>= 0x1f4)

if (arg1[0xa] != 2)
    CRITICAL_SECTION* esi_1 = &arg1[0xb]
    CRITICAL_SECTION* var_18_1 = esi_1
    
    while (true)
        enum WAIT_EVENT eax_1 = WaitForSingleObjectEx(arg1[0x14], dwMilliseconds, 0)
        sub_6eaa5e(esi_1)
        int32_t eax_2 = arg1[0xa]
        int32_t var_8 = 0
        
        if (eax_2 == 0)
            uint32_t ebx = zx.d(sub_6ec5a8(arg1))
            int32_t ebx_1 = neg.d(ebx)
            dwMilliseconds = (sbb.d(ebx_1, ebx_1, ebx != 0) & 0xffffff9b) + 0x64
        else if (eax_2 == 1)
            if (eax_1 == WAIT_TIMEOUT)
                Concurrency::details::ResourceManager::DoCoreMigration(arg1)
                int16_t top = top - 1
                unimplemented  {call 0x6eca15}
            label_6ecefe:
                
                if (arg1[4] u<= 0)
                    goto label_6ecf0b
                
                Concurrency::details::ResourceManager::SendResourceNotifications(arg1, 0)
                goto label_6ecf0b
            
            uint32_t eax_5
            int32_t edx_2
            eax_5, edx_2 = j____crtGetTickCount64()
            int32_t var_1c_2 = edx_2
            uint32_t esi_3 = eax_5 - result_1
            
            if (esi_3 u<= 0x64)
                if (arg1[4] u> 0)
                    Concurrency::details::ResourceManager::SendResourceNotifications(arg1, 0)
                
                int32_t var_34_2 = 0x64
                dwMilliseconds = 0x64 - esi_3
            else
                if (esi_3 u<= 0x82)
                    goto label_6ecefe
                
                sub_6ec53c(arg1)
            label_6ecf0b:
                uint32_t result_2
                int32_t edx_3
                result_2, edx_3 = j____crtGetTickCount64()
                int32_t var_34_1 = 0x64
                result_1 = result_2
                int32_t var_1c_3 = edx_3
                dwMilliseconds = 0x64
        
        int32_t var_8_1 = 1
        result = sub_6eabaa(var_18_1)
        int32_t var_8_2 = 0xffffffff
        
        if (arg1[0xa] == 2)
            break
        
        esi_1 = var_18_1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ecf6b
return result
