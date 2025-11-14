// 函数: sub_5d5230
// 地址: 0x5d5230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca4c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t ecx_1 = *(arg1 + 0xc) u>> 2
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx_1 s< 3)
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t* ebx = nullptr
int32_t* var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
void* esi

if (*(arg1 + 0xc) != 0)
    esi = *(arg1 + 8)
else
    esi = nullptr

if (ecx_1 s<= 0)
    *(arg1 + 0xc) = 0
    result.b = 1
else
    void* esi_1 = esi + 8
    enum HEAP_FLAGS dwFlags = (ecx_1 - 1) u/ 3 + 1
    enum HEAP_FLAGS i
    
    do
        result = *(esi_1 - 4)
        int32_t ecx_5 = *(esi_1 - 8)
        int32_t edx_2 = *esi_1
        int32_t var_24 = ecx_5
        int32_t result_1 = result
        int32_t var_1c = edx_2
        
        if (result s> 0)
            if (ecx_5 == 0xffffffff)
            label_5d52f5:
                sub_4158d0(&var_18, &var_24)
                sub_4158d0(&var_18, &result_1)
                sub_4158d0(&var_18, &var_1c)
            else
                void* ebx_1 = *(arg1 + 0x1c)
                
                if (ecx_5 u< (*(ebx_1 + 0xc) - *(ebx_1 + 8)) s>> 2)
                    result = *(*(ebx_1 + 8) + (ecx_5 << 2))
                    
                    if (result != 0 && result[8] == edx_2)
                        goto label_5d52f5
        
        esi_1 += 0xc
        i = dwFlags
        dwFlags -= 1
    while (i != HEAP_NO_SERIALIZE)
    ebx = var_18
    
    if (ebx == var_14)
        *(arg1 + 0xc) = 0
        result.b = 1
    else
        *(arg1 + 0xc) = dwFlags
        int32_t eax_7 = *(arg1 + 0x10)
        void* esi_4 = (var_14 - ebx) & 0xfffffffc
        
        if (esi_4 u< eax_7)
        label_5d536f:
            *(arg1 + 0xc) = esi_4
            
            if (esi_4 != 0)
                sub_69d850(*(arg1 + 8), ebx, esi_4, eax_2)
            else
                sub_69d850(nullptr, ebx, esi_4, eax_2)
            
            result.b = 1
        else
            uint32_t dwBytes = eax_7 + esi_4
            *(arg1 + 0x10) = dwBytes
            
            if (eax_7 == neg.d(esi_4))
                goto label_5d536f
            
            int32_t lpMem = *(arg1 + 8)
            
            if (lpMem == 0)
                result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes)
            else
                result = HeapReAlloc(data_75dc38, dwFlags, lpMem, dwBytes)
            
            *(arg1 + 8) = result
            
            if (result != 0)
                goto label_5d536f
            
            result.b = 0

if (ebx != 0)
    j__free(ebx)
    result.b = result.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
