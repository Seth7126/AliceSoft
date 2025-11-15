// 函数: sub_46ae20
// 地址: 0x46ae20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_24 = 1
char var_10 = 0x2e
void* eax_1

if (sub_42cb30(arg3, &var_10, arg1) == 0xffffffff)
    eax_1 = sub_46eb40(arg1 + 8, arg3)
else
    eax_1 = Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection(arg1 + 8)

eax_1.b = eax_1 != 0

if (eax_1.b == 0)
    struct IEXTreeReader::exfile::CDefineDataTree::VTable** eax_3
    void* edi_1
    
    if (sub_46eb40(arg1 + 8, arg2) == 0)
        if (Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection(arg1 + 8)
                != 0)
            edi_1 = sub_46aa60(arg1, arg3)
            
            if (edi_1 != 0)
                eax_3 = sub_46aa60(arg1, arg2)
            label_46aea3:
                
                if (sub_4751d0(edi_1, eax_3) != 0)
                    return sub_46ac90(arg1, arg2)
                
                sub_46ad20(arg1, edi_1)
    else
        eax_1 = sub_46aa00(arg1, arg2)
        void* var_c_1 = eax_1
        
        if (eax_1 != 0)
            if (*(eax_1 + 0x34) != 6)
                eax_1 = sub_46aa00(arg1, arg3)
                
                if (eax_1 != 0)
                    if (sub_46dd00(eax_1, var_c_1) != 0)
                        return sub_46ac90(arg1, arg2)
                    
                    sub_46ac90(arg1, arg3)
                    void* eax_6
                    eax_6.b = 0
                    return eax_6
            else
                edi_1 = sub_46aa60(arg1, arg3)
                
                if (edi_1 != 0)
                    eax_3 = sub_46e020(var_c_1)
                    goto label_46aea3

eax_1.b = 0
return eax_1
