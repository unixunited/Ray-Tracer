// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: //

#include "Light.h"

// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: //

using namespace RT;

// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: //

Light::Light( const Vector3& pos,
              const Color& color )
: mPosition( pos )
, mColor( color )
{
}

// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: //

Light::Light( void )
: mPosition( Vector3::ZERO )
, mColor( Color() )
{
}

// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: //

Light::~Light( void )
{
}

// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: //