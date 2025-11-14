// 函数: sub_487590
// 地址: 0x487590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_4107c0(*arg2, arg2[1])
arg2[1] = *arg2
struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x50)
struct _EXCEPTION_REGISTRATION_RECORD* i = *result

if (i != result)
    do
        result = sub_421cd0(arg2, &i[2])
        
        if (i->__offset(0xd).b == 0)
            struct _EXCEPTION_REGISTRATION_RECORD* i_1 = i->__offset(0x8).d
            
            if (i_1->__offset(0xd).b != 0)
                result = i->Handler
                
                if (*(result + 0xd) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0xd) != 0)
                            break
                
                i = result
            else
                i = i_1
                result = i->Next
                
                while (*(result + 0xd) == 0)
                    i = result
                    result = i->Next
    while (i != *(arg1 + 0x50))

return result
