// 函数: sub_586fa0
// 地址: 0x586fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d66a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t ecx = arg2
char* edx = *(ecx + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u<= *(ecx + 8))
    uint32_t esi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(ecx + 4) = &edx[4]
    int32_t edx_1 = *arg1
    int32_t i = (arg1[1] - edx_1) s>> 3
    uint32_t var_14_1 = esi_7
    
    if (i s> esi_7)
        for (; esi_7 s< i; i = (arg1[1] - edx_1) s>> 3)
            if (esi_7 s>= 0 && esi_7 s< i)
                Concurrency::details::UMSThreadProxy::ScopedCriticalRegion::~ScopedCriticalRegion(
                    edx_1 + (esi_7 << 3))
            
            esi_7 += 1
            edx_1 = *arg1
        
        esi_7 = var_14_1
        sub_5872a0(arg1, esi_7)
        ecx = arg2
    else if (i s< esi_7)
        int32_t var_1c = 0
        int32_t* var_18_1 = nullptr
        int32_t var_8_1 = 0
        sub_587200(arg1, esi_7, &var_1c)
        int32_t var_8_2 = 1
        
        if (var_18_1 != 0)
            bool cond:1_1 = var_18_1[1] != 1
            var_18_1[1]
            var_18_1[1] -= 1
            
            if (not(cond:1_1))
                (**var_18_1)(eax_2)
                bool cond:4_1 = var_18_1[2] != 1
                var_18_1[2]
                var_18_1[2] -= 1
                
                if (not(cond:4_1))
                    (*(*var_18_1 + 4))()
        
        int32_t var_8_3 = 0xffffffff
        ecx = arg2
    
    int32_t edi_2 = 0
    
    if (esi_7 s> 0)
        do
            result = *(ecx + 4)
            
            if (result + 1 u> *(ecx + 8))
                goto label_5871e9
            
            bool cond:3_1 = *result == 1
            *(ecx + 4) = result + 1
            result.b = cond:3_1
            
            if (result.b != 0)
                uint32_t** edx_4 = edi_2 << 3
                
                if (*(*arg1 + edx_4) == 0)
                    void var_24
                    int32_t* eax_18 = sub_586cf0(arg1, &var_24, arg3)
                    int32_t* esi_9 = *arg1 + (edi_2 << 3)
                    int32_t edx_5 = *eax_18
                    int32_t ecx_9 = eax_18[1]
                    *eax_18 = 0
                    eax_18[1] = 0
                    int32_t* eax_19 = esi_9[1]
                    esi_9[1] = ecx_9
                    int32_t* var_18_2 = eax_19
                    *esi_9 = edx_5
                    int32_t var_8_4 = 2
                    
                    if (eax_19 != 0)
                        bool cond:5_1 = eax_19[1] != 1
                        eax_19[1] -= 1
                        
                        if (not(cond:5_1))
                            (**eax_19)(eax_2)
                            bool cond:7_1 = eax_19[2] != 1
                            eax_19[2] -= 1
                            
                            if (not(cond:7_1))
                                (*(*eax_19 + 4))()
                    
                    int32_t var_8_5 = 3
                    int32_t* var_20
                    
                    if (var_20 != 0)
                        bool cond:6_1 = var_20[1] != 1
                        var_20[1]
                        var_20[1] -= 1
                        
                        if (not(cond:6_1))
                            (**var_20)(eax_2)
                            bool cond:8_1 = var_20[2] != 1
                            var_20[2]
                            var_20[2] -= 1
                            
                            if (not(cond:8_1))
                                (*(*var_20 + 4))()
                    
                    ecx = arg2
                    edx_4 = edi_2 << 3
                    esi_7 = var_14_1
                    int32_t var_8_6 = 0xffffffff
                
                if (sub_585010(*(edx_4 + *arg1), ecx).b == 0)
                    goto label_5871e9
                
                ecx = arg2
            else if (edi_2 s>= 0)
                int32_t edx_3 = *arg1
                
                if (edi_2 s< (arg1[1] - edx_3) s>> 3)
                    Concurrency::details::UMSThreadProxy::ScopedCriticalRegion::~ScopedCriticalRegion(
                        edx_3 + (edi_2 << 3))
                    ecx = arg2
            
            edi_2 += 1
        while (edi_2 s< esi_7)
    
    result = *(ecx + 4)
    
    if (result + 1 u<= *(ecx + 8))
        bool cond:2 = *result == 1
        *(ecx + 4) = result + 1
        result.b = cond:2
        arg1[4].b = result.b
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

label_5871e9:
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
