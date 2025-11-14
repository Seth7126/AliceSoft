// 函数: sub_4fd060
// 地址: 0x4fd060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0c78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t edi = ebx[4]
int32_t* edx

if (ebx[5] u< 0x10)
    edx = ebx
else
    edx = *ebx

int32_t esi = *(arg1 + 0x18)
int32_t* ecx

if (*(arg1 + 0x1c) u< 0x10)
    ecx = arg1 + 8
else
    ecx = *(arg1 + 8)

int32_t eax_4 = edi

if (esi u< edi)
    eax_4 = esi

struct _EXCEPTION_REGISTRATION_RECORD** result = sub_405190(eax_4, edx, ecx, eax_4)
bool cond:2 = result == 0

if (result == 0)
    if (esi u>= edi)
        result.b = esi != edi
    else
        result = 0xffffffff
    
    cond:2 = result == 0

result.b = cond:2

if (result.b == 0)
    *(arg1 + 0x24) = *(arg1 + 0x20)
    struct partsengine::CLLSprite::VTable* var_28
    sub_505680(&var_28)
    int32_t var_4 = 0
    
    if (sub_5058d0(&var_28, ebx) != 0)
        void* var_24
        void* eax_7 = var_24
        int32_t ecx_3
        
        if (eax_7 != 0)
            ecx_3 = *(eax_7 + 0x18)
        else
            ecx_3 = 0
        
        *(arg1 + 0x2c) = ecx_3
        
        if (eax_7 != 0)
            eax_7 = *(eax_7 + 0x1c)
        
        *(arg1 + 0x30) = eax_7
        *(arg1 + 0x48) = 1
        int32_t* edi_1 = sub_506650(&var_28)
        int32_t* var_30_1 = edi_1
        
        if (edi_1 != 0 && (*(*edi_1 + 0x28))(eax_2) != 0)
            int32_t i = 0
            *(arg1 + 0x24) = *(arg1 + 0x20)
            int32_t i_1 = 0
            
            if (*(arg1 + 0x30) s> 0)
                do
                    int32_t j = 0
                    
                    if (*(arg1 + 0x2c) s> 0)
                        do
                            char* eax_12 = (*(*edi_1 + 8))(j, i)
                            int32_t ecx_7 = *(arg1 + 0x24)
                            char* edi_2 = &eax_12[3]
                            
                            if (edi_2 u< ecx_7)
                                eax_12 = *(arg1 + 0x20)
                            
                            char* ecx_10
                            
                            if (edi_2 u>= ecx_7 || eax_12 u> edi_2)
                                if (ecx_7 == *(arg1 + 0x28))
                                    sub_403590(arg1 + 0x20, 1)
                                
                                ecx_10 = *(arg1 + 0x24)
                                
                                if (ecx_10 != 0)
                                    eax_12.b = *edi_2
                                    *ecx_10 = eax_12.b
                            else
                                if (ecx_7 == *(arg1 + 0x28))
                                    sub_403590(arg1 + 0x20, 1)
                                
                                ecx_10 = *(arg1 + 0x24)
                                
                                if (ecx_10 != 0)
                                    eax_12.b = (*(arg1 + 0x20))[edi_2 - eax_12]
                                    *ecx_10 = eax_12.b
                            *(arg1 + 0x24) += 1
                            j += 1
                            i = i_1
                            edi_1 = var_30_1
                        while (j s< *(arg1 + 0x2c))
                    
                    i += 1
                    i_1 = i
                while (i s< *(arg1 + 0x30))
                
                ebx = arg2
        
        if (arg1 + 8 != ebx)
            sub_401ff0(arg1 + 8, ebx, 0, 0xffffffff)
        
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_4_1 = 0xffffffff
    sub_505790(&var_28)
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
