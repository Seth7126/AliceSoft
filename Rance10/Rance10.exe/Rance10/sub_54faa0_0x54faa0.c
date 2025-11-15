// 函数: sub_54faa0
// 地址: 0x54faa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??0UMSThreadProxy@details@Concurrency@@QAE@PAUIThreadProxyFactory@12@PAXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1

if (*esi != 0)
    int32_t* arg_4
    int32_t arg_8
    int32_t arg_c
    int32_t arg_10
    sub_54ee10(arg1, &arg_4, &arg_8, &arg_c, &arg_10)
    int32_t var_a0_2 = arg_10
    
    if (sub_54ed10(esi, arg_4, arg_8, arg_c) == 0)
        int32_t* arg_14
        bool cond:0 = arg_14 s<= 0xff
        int32_t var_14
        int32_t* ecx_3 = &var_14
        var_14 = 0xff
        
        if (cond:0)
            ecx_3 = &arg_14
        
        int32_t* var_18 = nullptr
        int32_t* eax_4 = &var_18
        
        if (*ecx_3 s> 0)
            eax_4 = ecx_3
        
        int32_t* arg_18
        bool cond:1 = arg_18 s<= 0xff
        int32_t** ecx_4 = &arg_14
        var_14 = *eax_4
        
        if (cond:1)
            ecx_4 = &arg_18
        
        arg_14 = 0xff
        int32_t** eax_6 = &var_18
        var_18 = nullptr
        
        if (*ecx_4 s> 0)
            eax_6 = ecx_4
        
        int32_t* arg_1c
        bool cond:2 = arg_1c s<= 0xff
        int32_t** ecx_5 = &arg_14
        var_18 = *eax_6
        
        if (cond:2)
            ecx_5 = &arg_1c
        
        arg_14 = 0xff
        int32_t** eax_8 = &arg_18
        arg_18 = nullptr
        
        if (*ecx_5 s> 0)
            eax_8 = ecx_5
        
        int32_t ecx_6 = *esi
        arg_14 = *eax_8
        int32_t ebx
        
        if (ecx_6 == 0)
            ebx = 0
        else if (*(esi + 0x16) == 0)
            int32_t* ecx_7 = *(ecx_6 + 0x118)
            
            if (ecx_7 != 0)
                ebx = (*(*ecx_7 + 0x10))(eax_2)
            else
                ebx = 0
        else
            ebx = esi[0xb]
        
        int32_t ecx_8 = *esi
        int32_t edi
        
        if (ecx_8 == 0)
            edi = 0
        else if (*(esi + 0x16) == 0)
            int32_t* ecx_9 = *(ecx_8 + 0x118)
            
            if (ecx_9 != 0)
                edi = (*(*ecx_9 + 0x14))(eax_2)
            else
                edi = 0
        else
            edi = esi[0xc]
        
        int32_t var_8c[0x5]
        sub_54d5a0(&var_8c)
        int32_t var_8_1 = 0
        sub_54f960(&var_8c, ebx, edi)
        int32_t* var_a0_4 = arg_14
        int32_t* var_a4_4 = var_18
        int32_t var_a8_3 = var_14
        int32_t var_ac_3 = edi
        sub_54f290(&var_8c, 0, 0, ebx)
        void* edi_1 = var_8c[0]
        
        if (edi_1 != 0)
            edi_1 = *(edi_1 + 0x118)
        
        int32_t ebx_1 = arg_8
        arg_14 = arg_4
        int32_t* eax_15 = sub_54e9a0(esi)
        int32_t* ecx_14 = esi[4]
        arg_18 = eax_15
        
        if (ecx_14 != 0)
            int32_t* eax_16 = arg_14
            (*(*ecx_14 + 0x18))(arg_18, eax_16, ebx_1, edi_1, eax_16, ebx_1, arg_c, arg_10)
        
        int32_t* ecx_15 = var_8c[0]
        
        if (ecx_15 != 0)
            int32_t esi_1 = ecx_15[1]
            ecx_15[1] -= 1
            (**ecx_15)(esi_1 - 1)
            var_8c[0] = 0
            char var_78_1 = 1
        
        Concurrency::details::AllocatorBucket::~AllocatorBucket(&var_8c)
        struct _EXCEPTION_REGISTRATION_RECORD** result
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
