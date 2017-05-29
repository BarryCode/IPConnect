/*
 *   This file is part of IPConnect
 *   Copyright 2017 Shashwat Dixit <shashwatdixit124@gmail.com>
 * 
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Library General Public License as
 *   published by the Free Software Foundation; either version 3 of the
 *   License, or (at your option) any later version.
 * 
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 * 
 *   You should have received a copy of the GNU Library General Public
 *   License along with this program; if not, write to the
 *   Free Software Foundation, Inc.,
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "file.h"

namespace IPConnect
{

File::File() : m_name(QString()) , m_path(QString()) , m_size(0) , m_action(UNKNOWN) , m_url(QString())
{
}

File::~File()
{
}

QString File::name() const
{
	return m_name;
}

QString File::path() const
{
	return m_path;
}

qint32 File::size() const
{
	return m_size;
}

File::Action File::action() const
{
	return m_action;
}

QString File::url() const
{
	return m_url;
}

void File::setName(QString name)
{
	m_name = name;
}

void File::setPath(QString path)
{
	m_path = path;
}

void File::setSize(qint32 size)
{
	m_size = size;
}

void File::setAction(Action action)
{
	m_action = action;
}

void File::setUrl(QString url)
{
	m_url = url;
}

}