// 函数: sub_53c0d0
// 地址: 0x53c0d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** ebx = arg2
int32_t ebp = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = (ebx[0x14] - ebx[0x13]) s>> 2
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result

if (result s> 0)
    while (true)
        if (ebp s>= 0 && ebp s< (ebx[0x14] - ebx[0x13]) s>> 2)
            void* edi_1 = ebx[0x13][ebp]
            
            if (edi_1 != 0)
                if (*(edi_1 + 0x68) != 0)
                    int32_t esi_1 = 0
                    result = (*(edi_1 + 0x2c) - *(edi_1 + 0x28)) s/ 0xbc
                    
                    if (result s> 0)
                        do
                            if (sub_53d1c0(arg1, ebx, edi_1, esi_1).b == 0)
                                goto label_53c163
                            
                            esi_1 += 1
                        while (esi_1 s< result)
                
                ebp += 1
                
                if (ebp s>= result_1)
                    break
                
                continue
        
    label_53c163:
        result.b = 0
        return result

result.b = 1
return result
