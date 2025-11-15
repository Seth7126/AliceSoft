// 函数: sub_546c80
// 地址: 0x546c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??0UMSThreadProxy@details@Concurrency@@QAE@PAUIThreadProxyFactory@12@PAXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t* edx

if (ebx[5] u< 0x10)
    edx = ebx
else
    edx = *ebx

int32_t* ecx

if (*(arg1 + 0x1c) u< 0x10)
    ecx = arg1 + 8
else
    ecx = *(arg1 + 8)

int32_t edi = *(arg1 + 0x18)
int32_t esi = ebx[4]
int32_t eax_4 = esi

if (edi u< esi)
    eax_4 = edi

if (sub_406ac0(eax_4, edx, ecx, eax_4) == 0 && edi u>= esi && edi u<= esi)
    int32_t eax_5
    eax_5.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

void* edi_1 = arg1
void* esi_1 = edi_1 + 0x20
*(esi_1 + 4) = *(edi_1 + 0x20)
void* var_8c
sub_54d5a0(&var_8c)
int32_t var_8_1 = 0

if (sub_54d7d0(&var_8c, ebx) != 0)
    void* eax_8 = var_8c
    char var_76
    int32_t* ecx_5
    
    if (eax_8 == 0)
        ecx_5 = nullptr
    else
        int32_t* var_60
        
        if (var_76 == 0)
            ecx_5 = *(eax_8 + 0x118)
            
            if (ecx_5 != 0)
                ecx_5 = (*(*ecx_5 + 0x10))(eax_2)
                eax_8 = var_8c
        else
            ecx_5 = var_60
    
    *(edi_1 + 0x2c) = ecx_5
    int32_t* ecx_6
    
    if (eax_8 == 0)
        ecx_6 = nullptr
    else
        int32_t* var_5c
        
        if (var_76 == 0)
            ecx_6 = *(eax_8 + 0x118)
            
            if (ecx_6 != 0)
                ecx_6 = (*(*ecx_6 + 0x14))(eax_2)
                eax_8 = var_8c
        else
            ecx_6 = var_5c
    
    *(edi_1 + 0x30) = ecx_6
    *(edi_1 + 0x50) = 1
    
    if (eax_8 != 0)
        int32_t* ecx_7 = *(eax_8 + 0x118)
        
        if (ecx_7 != 0 && (*(*ecx_7 + 0x28))(eax_2) != 0)
            int32_t i = 0
            *(esi_1 + 4) = *esi_1
            int32_t i_1 = 0
            
            if (*(edi_1 + 0x30) s> 0)
                do
                    int32_t j = 0
                    
                    if (*(edi_1 + 0x2c) s> 0)
                        do
                            void* eax_18 = (*(*ecx_7 + 8))(j, i)
                            int32_t ecx_9 = *(esi_1 + 4)
                            char* edi_2 = eax_18 + 3
                            
                            if (edi_2 u< ecx_9)
                                eax_18 = *esi_1
                            
                            char* ecx_12
                            
                            if (edi_2 u>= ecx_9 || eax_18 u> edi_2)
                                if (ecx_9 == *(esi_1 + 8))
                                    sub_405a20(esi_1, 1)
                                
                                ecx_12 = *(esi_1 + 4)
                                
                                if (ecx_12 != 0)
                                    eax_18.b = *edi_2
                                    *ecx_12 = eax_18.b
                            else
                                if (ecx_9 == *(esi_1 + 8))
                                    sub_405a20(esi_1, 1)
                                
                                ecx_12 = *(esi_1 + 4)
                                
                                if (ecx_12 != 0)
                                    eax_18.b = *(edi_2 - eax_18 + *esi_1)
                                    *ecx_12 = eax_18.b
                            edi_1 = arg1
                            j += 1
                            *(esi_1 + 4) += 1
                            i = i_1
                        while (j s< *(edi_1 + 0x2c))
                    
                    i += 1
                    i_1 = i
                while (i s< *(edi_1 + 0x30))
                
                ebx = arg2
    
    if (arg1 + 8 != ebx)
        sub_403590(arg1 + 8, ebx, 0, 0xffffffff)
    
    ebx.b = 1
else
    ebx.b = 0

Concurrency::details::AllocatorBucket::~AllocatorBucket(&var_8c)
struct _EXCEPTION_REGISTRATION_RECORD** eax_19
eax_19.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_19
