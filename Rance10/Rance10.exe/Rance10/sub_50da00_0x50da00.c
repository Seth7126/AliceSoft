// 函数: sub_50da00
// 地址: 0x50da00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737bb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg2
void** var_68 = edi
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable**
     eax_3 = sub_4ef140(*(arg1 + 0xac))
void* ecx_1 = *(arg1 + 0xb0)
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable**
     var_60 = eax_3
int32_t* eax_4 = sub_4ef220(ecx_1)
bool cond:0 = *(arg1 + 0xe0) u< 0x10
void* eax_5 = arg1 + 0xcc
void* var_70 = eax_5
*(eax_5 + 0x10) = 0

if (not(cond:0))
    eax_5 = *eax_5

*eax_5 = 0
void* eax_6 = arg1 + 0xe4
bool cond:1 = *(eax_6 + 0x14) u< 0x10
void* var_6c = eax_6
*(eax_6 + 0x10) = 0

if (not(cond:1))
    eax_6 = *eax_6

*eax_6 = 0
int32_t esi = *(arg1 + 0x128)
int32_t var_4c = esi

if ((esi.b & 1) != 0)
    var_4c = esi + 1

int32_t eax_9 = int.d(sub_4a78b0(*(arg1 + 0x140)))
float xmm0_2 = *(arg1 + 0x13c)

if (eax_9 s< *(arg1 + 0x128))
    esi = eax_9

int32_t var_50 = esi
float xmm0_3 = sub_4a78b0(xmm0_2)
int32_t result_11 = *(arg1 + 0x128)
int32_t result_9 = result_11
int32_t result_10 = int.d(xmm0_3)

if (result_10 s< result_11)
    result_9 = result_10

int32_t* eax_10 = &var_50
int32_t result_7 = result_9

if (result_9 s>= esi)
    eax_10 = &result_7

var_50 = *(arg1 + 0x214) + var_4c + (*eax_10 << 1)
int32_t result_3 = *(arg1 + 0x128)
int32_t result_4 = result_3

if ((result_3.b & 1) != 0)
    result_4 = result_3 + 1

int32_t result_6 = result_3
int32_t result_8 = int.d(sub_4a78b0(*(arg1 + 0x140)))
float xmm0_6 = *(arg1 + 0x13c)

if (result_8 s< result_3)
    result_6 = result_8

result_7 = result_6
int32_t result_5 = int.d(sub_4a78b0(xmm0_6))

if (result_5 s< result_3)
    result_3 = result_5

int32_t* eax_16 = &result_7
int32_t result_1 = result_3

if (result_3 s>= result_6)
    eax_16 = &result_1

int32_t esi_3 = neg.d(eax_4[0x46])
int32_t ecx_8 = var_50
int32_t eax_19
int32_t edx
edx:eax_19 = sx.q(result_4 + (*eax_16 << 1))
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable**
     edx_2 = var_60
int32_t result = (eax_19 + (edx & 3)) s>> 2
result_1 = result

if (edi[4] != 0)
    int32_t ebx_1 = ecx_8 - edx_2[0x46] + result
    
    while (true)
        result += esi_3
        
        if (arg3 s<= result && arg4 s<= ebx_1)
            char* ecx_14 = var_6c
            
            if (ecx_14 != edi)
                result = sub_403590(ecx_14, edi, 0, 0xffffffff)
            
            break
        
        void** var_30
        sub_50f730(&var_30, edi)
        int32_t var_8_1 = 0
        void** ecx_10 = &var_30
        int32_t eax_21 = 1
        int32_t result_2
        
        if (result_2 u>= 0x10)
            ecx_10 = var_30
        
        int32_t var_20
        
        if (var_20 u< 1)
            eax_21 = var_20
        
        int32_t eax_22 = sub_406ac0(eax_21, 0x7666d8, ecx_10, eax_21)
        
        if (eax_22 == 0 && var_20 u>= 1 && var_20 u<= 1 && arg4 s<= ebx_1)
            void* var_48
            sub_409670(var_6c, sub_4079d0(eax_22, &var_30, &var_48, var_68))
            int32_t var_34
            
            if (var_34 u>= 0x10)
                sub_403160(var_48, var_34 + 1, 1)
            
            result = result_2
            
            if (result u>= 0x10)
                result = sub_403160(var_30, result + 1, 1)
            
            break
        
        sub_4055a0(var_70, &var_30, 0, 0xffffffff)
        void** ecx_12 = &var_30
        int32_t eax_23 = 1
        
        if (result_2 u>= 0x10)
            ecx_12 = var_30
        
        if (var_20 u< 1)
            eax_23 = var_20
        
        if (sub_406ac0(eax_23, 0x7666d4, ecx_12, eax_23) != 0 || var_20 u< 1 || var_20 u> 1)
            struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
                ** ecx_13 = nullptr
            
            if (sub_641fe0(arg1 + 0x120, &var_30, &var_60) != 0)
                ecx_13 = var_60
            
            esi_3 += *(arg1 + 0x210) + ecx_13
        else
            esi_3 = neg.d(eax_4[0x46])
            ebx_1 += var_50
        
        int32_t var_8_2 = 0xffffffff
        result = result_2
        
        if (result u>= 0x10)
            result = sub_403160(var_30, result + 1, 1)
        
        edi = var_68
        
        if (edi[4] == 0)
            break
        
        result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
