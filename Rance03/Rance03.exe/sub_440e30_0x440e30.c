// 函数: sub_440e30
// 地址: 0x440e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg2
int32_t eax_1 = (**edi)()
int32_t eax_3

if (eax_1 == 0xa)
    eax_3 = (*(*edi + 0xc))()

int32_t result

if (eax_1 == 0xa && eax_3 == 1)
label_440e6b:
    int32_t eax_8 = (arg1[1] - *arg1) s>> 2
    arg2 = eax_8
    void* eax_9 = *edi
    
    if (eax_8 s<= 0)
        return (*(eax_9 + 0x38))() != 0
    
    if ((*(eax_9 + 0x30))(&arg2, 1).b != 0)
        int32_t esi = 0
        
        if (arg2 s> 0)
            do
                if ((*(*edi + 0x24))(esi, *(*arg1 + (esi << 2))).b == 0)
                    result.b = 0
                    return result
                
                esi += 1
            while (esi s< arg2)
        
        result.b = 1
        return result
else if ((**edi)() == 0xe && (*(*edi + 0xc))() == 0xffffffff)
    goto label_440e6b

result.b = 0
return result
