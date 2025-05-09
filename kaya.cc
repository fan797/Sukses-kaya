/* styles.css */
* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

body {
  font-family: Arial, sans-serif;
  background: #f8f9fa;
  color: #333;
}

.header {
  background: #343a40;
  color: #fff;
}

.nav {
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 1rem 2rem;
}

.logo {
  font-size: 1.5rem;
  text-decoration: none;
  color: #fff;
}

.nav-links {
  list-style: none;
  display: flex;
  gap: 1rem;
  transition: max-height 0.3s ease;
}

.nav-links li a {
  text-decoration: none;
  color: #fff;
  font-weight: bold;
}

.menu-toggle {
  display: none;
  background: none;
  border: none;
  font-size: 1.5rem;
  color: #fff;
  cursor: pointer;
}

.hero {
  text-align: center;
  padding: 4rem 2rem;
}

.container {
  max-width: 800px;
  margin: 2rem auto;
  padding: 1rem;
}

.step {
  margin-bottom: 2rem;
}

.step h2 {
  color: #007bff;
  margin-bottom: 0.5rem;
}

.footer {
  text-align: center;
  padding: 1rem;
  font-size: 0.9rem;
  background: #e9ecef;
}

/* Responsive */
@media (max-width: 768px) {
  .nav-links {
    flex-direction: column;
    max-height: 0;
    overflow: hidden;
  }
  .nav-links.active {
    max-height: 200px;
  }
  .menu-toggle {
    display: block;
  }
}