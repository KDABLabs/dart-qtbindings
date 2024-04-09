// @snippet qvariant-fromObject

/** static*/
QVariant QVariant_wrapper::fromObject(QObject *obj)
{
    return QVariant::fromValue<QObject *>(obj);
}
// @snippet qvariant-fromObject

// @snippet qvariant-toObject
/** static */
QObject *QVariant_wrapper::toObject(QVariant v) // apparently shiboken isn't honouring adding const-&
{
    return v.value<QObject *>();
}
// @snippet qvariant-toObject